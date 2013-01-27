/*
 * Copyright (c) 2013, Peter Thorson. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the WebSocket++ Project nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
 * ARE DISCLAIMED. IN NO EVENT SHALL PETER THORSON BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

#ifndef WEBSOCKETPP_CONFIG_ASIO_HPP
#define WEBSOCKETPP_CONFIG_ASIO_HPP

#include <websocketpp/config/core.hpp>
#include <websocketpp/transport/asio/endpoint.hpp>

namespace websocketpp {
namespace config {

struct asio : public core {
	typedef core::concurrency_type concurrency_type;
	
	typedef core::request_type request_type;
	typedef core::response_type response_type;

	typedef core::message_type message_type;
	typedef core::con_msg_manager_type con_msg_manager_type;
	typedef core::endpoint_msg_manager_type endpoint_msg_manager_type;
	
	typedef core::alog_type alog_type;
	typedef core::alog_type elog_type;
    
    struct transport_config {
        typedef asio::concurrency_type concurrency_type;
        typedef asio::alog_type alog_type;
        typedef asio::elog_type elog_type;
        typedef websocketpp::transport::asio::basic_socket::endpoint 
            socket_type;
    };

    typedef websocketpp::transport::asio::endpoint<transport_config> 
        transport_type;
};

} // namespace config
} // namespace websocketpp

#endif // WEBSOCKETPP_CONFIG_ASIO_HPP
