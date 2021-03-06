//================================================================================================================================================
// FILE: toyca-client-get-ca-root-cert.h
// (c) GIE 2010-04-03  15:09
//
//================================================================================================================================================
#ifndef H_GUARD_TOYCA_CLIENT_GET_CA_ROOT_CERT_2010_04_03_15_09
#define H_GUARD_TOYCA_CLIENT_GET_CA_ROOT_CERT_2010_04_03_15_09
//================================================================================================================================================
#pragma once
//================================================================================================================================================
#include "toyca-client-worker.hpp"
//================================================================================================================================================
namespace stcrypt { namespace  caclient {

	client_session_ptr create_session__get_ca_root_certificate(worker_t& parent, boost::asio::ip::tcp::endpoint const& ca_endpoint, worker_t::event__get_ca_root_certificate_type	const & callback, worker_t::event__error_type const& error_callback);

} }
//================================================================================================================================================
#endif
//================================================================================================================================================
