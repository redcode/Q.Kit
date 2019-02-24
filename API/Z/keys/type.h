/* Z Kit - keys/type.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2019 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_keys_type_H
#define Z_keys_type_H

#define Z_FUNDAMENTAL_POINTER	     1
#define Z_FUNDAMENTAL_CHAR	     2 /* char			  */
#define Z_FUNDAMENTAL_UCHAR	     3 /* unsigned char		  */
#define Z_FUNDAMENTAL_SCHAR	     4 /* signed char		  */
#define Z_FUNDAMENTAL_USHORT	     5 /* unsigned short int	  */
#define Z_FUNDAMENTAL_SSHORT	     6 /* signed short int	  */
#define Z_FUNDAMENTAL_UINT	     7 /* unsigned int		  */
#define Z_FUNDAMENTAL_SINT	     8 /* signed int		  */
#define Z_FUNDAMENTAL_ULONG	     9 /* unsigned long int	  */
#define Z_FUNDAMENTAL_SLONG	    10 /* signed long int	  */
#define Z_FUNDAMENTAL_ULLONG	    11 /* unsigned long long int  */
#define Z_FUNDAMENTAL_SLLONG	    12 /* signed long long int	  */
#define Z_FUNDAMENTAL_FLOAT	    13 /* float			  */
#define Z_FUNDAMENTAL_DOUBLE	    14 /* double		  */
#define Z_FUNDAMENTAL_LDOUBLE	    15 /* long double		  */
#define Z_FUNDAMENTAL_BOOLEAN	    16 /* (C) _Bool / (C++) bool  */
#define Z_FUNDAMENTAL_WCHAR	    17 /* (C++) wchar_t		  */
#define Z_FUNDAMENTAL_CHAR16	    18 /* (C++) char16_t	  */
#define Z_FUNDAMENTAL_CHAR32	    19 /* (C++) char32_t	  */
#define Z_FUNDAMENTAL_NULL_POINTER  20 /* (C++) decltype(nullptr) */
#define Z_FUNDAMENTAL_UINT8	   128
#define Z_FUNDAMENTAL_SINT8	   129
#define Z_FUNDAMENTAL_UINT16	   130 /* Base type in SILP64 data model only. */
#define Z_FUNDAMENTAL_SINT16	   131 /* Base type in SILP64 data model only. */
#define Z_FUNDAMENTAL_UINT32	   132 /* Base type in ILP64 and SILP64 data models only. */
#define Z_FUNDAMENTAL_SINT32	   133 /* Base type in ILP64 and SILP64 data models only. */
#define Z_FUNDAMENTAL_UINT64	   134
#define Z_FUNDAMENTAL_SINT64	   135
#define Z_FUNDAMENTAL_UINT128	   136
#define Z_FUNDAMENTAL_SINT128	   137
#define Z_FUNDAMENTAL_FLOAT16	   192
#define Z_FUNDAMENTAL_FLOAT32	   193
#define Z_FUNDAMENTAL_FLOAT64	   194
#define Z_FUNDAMENTAL_FLOAT128	   195
#define Z_FUNDAMENTAL_FLOAT80_X87  196
#define Z_FUNDAMENTAL_FLOAT96_X87  197
#define Z_FUNDAMENTAL_FLOAT128_X87 198

#endif /* Z_keys_type_H */
