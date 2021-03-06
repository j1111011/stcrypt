//================================================================================================================================================
// FILE: stcrypt-cng-oid-encdec.h
// (c) GIE 2010-09-14  18:09
//
//================================================================================================================================================
#ifndef H_GUARD_STCRYPT_CNG_OID_ENCDEC_2010_09_14_18_09
#define H_GUARD_STCRYPT_CNG_OID_ENCDEC_2010_09_14_18_09
//================================================================================================================================================
#pragma once
//================================================================================================================================================
namespace stcrypt {

	struct cng_blob_info_t {
		DWORD	m_type;
		unsigned char const * m_blob;
		size_t	m_blob_size;
	};

}
//================================================================================================================================================
#endif
//================================================================================================================================================
