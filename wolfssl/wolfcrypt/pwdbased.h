/* pwdbased.h
 *
 * Copyright (C) 2006-2015 wolfSSL Inc.
 *
 * This file is part of wolfSSL. (formerly known as CyaSSL)
 *
 * wolfSSL is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * wolfSSL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */


#ifndef NO_PWDBASED

#ifndef WOLF_CRYPT_PWDBASED_H
#define WOLF_CRYPT_PWDBASED_H

#include <wolfssl/wolfcrypt/types.h>
#include <wolfssl/wolfcrypt/md5.h>       /* for hash type */
#include <wolfssl/wolfcrypt/sha.h>

#ifdef __cplusplus
    extern "C" {
#endif

/*
 * hashType renamed to typeH to avoid shadowing global declation here:
 * wolfssl/wolfcrypt/asn.h line 173 in enum Oid_Types
 */
WOLFSSL_API int wc_PBKDF1(byte* output, const byte* passwd, int pLen,
                      const byte* salt, int sLen, int iterations, int kLen,
                      int typeH);
WOLFSSL_API int wc_PBKDF2(byte* output, const byte* passwd, int pLen,
                      const byte* salt, int sLen, int iterations, int kLen,
                      int typeH);
WOLFSSL_API int wc_PKCS12_PBKDF(byte* output, const byte* passwd, int pLen,
                            const byte* salt, int sLen, int iterations,
                            int kLen, int typeH, int purpose);


#ifdef __cplusplus
    } /* extern "C" */
#endif

#endif /* WOLF_CRYPT_PWDBASED_H */
#endif /* NO_PWDBASED */