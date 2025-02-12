/*
 * Copyright (C) 2008, 2009 Nokia Corporation.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
 *
 * This file is part of Rygel.
 *
 * Rygel is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Rygel is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

using GUPnP;
using Gst;

// An HTTP request handler that passes the item content through as is.
internal class Rygel.HTTPIdentityHandler : Rygel.HTTPGetHandler {

    public HTTPIdentityHandler (Cancellable? cancellable) {
        this.cancellable = cancellable;
    }

    public override void add_response_headers (HTTPGet request)
                                               throws HTTPRequestError {
        if (request.subtitle != null) {
           request.msg.response_headers.append ("Content-Type",
                                                request.subtitle.mime_type);
        } else if (request.thumbnail != null) {
            request.msg.response_headers.append ("Content-Type",
                                                 request.thumbnail.mime_type);
        } else {
            request.msg.response_headers.append ("Content-Type",
                                                 request.item.mime_type);
        }

        if (request.seek != null) {
            request.seek.add_response_headers ();
        } else {
            var size = this.get_size (request);

            if (size > 0) {
                request.msg.response_headers.set_content_length (size);
            }
        }

        // Chain-up
        base.add_response_headers (request);
    }

    public override HTTPResponse render_body (HTTPGet request)
                                              throws HTTPRequestError {
        try {
            return this.render_body_real (request);
        } catch (Error err) {
            throw new HTTPRequestError.NOT_FOUND (err.message);
        }
    }

    public override bool knows_size (HTTPGet request) {
        var size = this.get_size (request);

        return (request.seek != null && request.seek is HTTPByteSeek) ||
                    size > 0;
    }

    protected override DIDLLiteResource add_resource (DIDLLiteItem didl_item,
                                                      HTTPGet      request)
                                                      throws Error {
        var protocol = request.http_server.get_protocol ();

        if (request.thumbnail != null) {
            return request.thumbnail.add_resource (didl_item, protocol);
        } else {
            return request.item.add_resource (didl_item, null, protocol);
        }
    }

    private HTTPResponse render_body_real (HTTPGet request) throws Error {
        Element src;

        if (request.subtitle != null) {
            src = GstUtils.create_source_for_uri (request.subtitle.uri);
        } else if (request.thumbnail != null) {
            src = GstUtils.create_source_for_uri (request.thumbnail.uri);
        } else {
            src = request.item.create_stream_source
                                        (request.http_server.context.host_ip);
        }

        if (src == null) {
            throw new HTTPRequestError.NOT_FOUND (_("Not found"));
        }

        if (src.is_floating ()) {
            src.ref_sink ();
        }

        return new HTTPResponse (request, this, src);
    }

    private int64 get_size (HTTPGet request) {
        if (request.subtitle != null) {
            return request.subtitle.size;
        }

        if (request.thumbnail != null) {
            return request.thumbnail.size;
        }

        return request.item.size;
    }
}
