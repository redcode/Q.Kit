/* Z Kit - types/real.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//__/__| Kit
Copyright (C) 2006-2020 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_types_real_H
#define Z_types_real_H

#include <Z/inspection/floating-point.h>
#include <Z/macros/templating.h>

/* MARK: - Fixed format real types */

#if	Z_FLOATING_POINT_HAS_TYPE(BFP16 ) || \
	Z_FLOATING_POINT_HAS_TYPE(BFP32 ) || \
	Z_FLOATING_POINT_HAS_TYPE(BFP64 ) || \
	Z_FLOATING_POINT_HAS_TYPE(BFP128) || \
	Z_FLOATING_POINT_HAS_TYPE(DFP32 ) || \
	Z_FLOATING_POINT_HAS_TYPE(DFP64 ) || \
	Z_FLOATING_POINT_HAS_TYPE(DFP128)

#	include <Z/formats/floating-point/IEEE 754.h>

#	if Z_FLOATING_POINT_HAS_TYPE(BFP16)

		typedef Z_FLOATING_POINT_TYPE(BFP16) zbfp16;
#		define Z_BFP16			     Z_FLOATING_POINT_LITERAL	 (BFP16)
#		define Z_BFP16_FUNDAMENTAL	     Z_FLOATING_POINT_FUNDAMENTAL(BFP16)
#		define Z_BFP16_FIXED_FUNDAMENTAL     Z_FUNDAMENTAL_BFP16
#		define Z_BFP16_NUMBER_FORMAT	     Z_NUMBER_FORMAT_IEEE_754_BINARY16
#		define Z_BFP16_BITS		     16
#		define Z_BFP16_DIGITS_10	     Z_IEEE_754_BINARY16_DIGITS_10
#		define Z_BFP16_MAXIMUM_DIGITS_10     Z_IEEE_754_BINARY16_MAXIMUM_DIGITS_10
#		define Z_BFP16_RADIX		     Z_IEEE_754_BINARY16_RADIX
#		define Z_BFP16_SIGNIFICAND_DIGITS    Z_IEEE_754_BINARY16_SIGNIFICAND_DIGITS
#		define Z_BFP16_EXPONENT_MAXIMUM	     Z_IEEE_754_BINARY16_EXPONENT_MAXIMUM
#		define Z_BFP16_EXPONENT_MINIMUM	     Z_IEEE_754_BINARY16_EXPONENT_MINIMUM
#		define Z_BFP16_EXPONENT_10_MAXIMUM   Z_IEEE_754_BINARY16_EXPONENT_10_MAXIMUM
#		define Z_BFP16_EXPONENT_10_MINIMUM   Z_IEEE_754_BINARY16_EXPONENT_10_MINIMUM
#		define Z_BFP16_EPSILON		     Z_BFP16(Z_IEEE_754_BINARY16_EPSILON)
#		define Z_BFP16_MAXIMUM		     Z_BFP16(Z_IEEE_754_BINARY16_MAXIMUM)
#		define Z_BFP16_MINIMUM		     Z_BFP16(Z_IEEE_754_BINARY16_MINIMUM)
#		define Z_BFP16_DENORMAL_MINIMUM	     Z_BFP16(Z_IEEE_754_BINARY16_DENORMAL_MINIMUM)

#	endif

#	if Z_FLOATING_POINT_HAS_TYPE(BFP32)

		typedef Z_FLOATING_POINT_TYPE(BFP32) zbfp32;
#		define Z_BFP32			     Z_FLOATING_POINT_LITERAL	 (BFP32)
#		define Z_BFP32_FUNDAMENTAL	     Z_FLOATING_POINT_FUNDAMENTAL(BFP32)
#		define Z_BFP32_FIXED_FUNDAMENTAL     Z_FUNDAMENTAL_BFP32
#		define Z_BFP32_NUMBER_FORMAT	     Z_NUMBER_FORMAT_IEEE_754_BINARY32
#		define Z_BFP32_BITS		     32
#		define Z_BFP32_DIGITS_10	     Z_IEEE_754_BINARY32_DIGITS_10
#		define Z_BFP32_MAXIMUM_DIGITS_10     Z_IEEE_754_BINARY32_MAXIMUM_DIGITS_10
#		define Z_BFP32_RADIX		     Z_IEEE_754_BINARY32_RADIX
#		define Z_BFP32_SIGNIFICAND_DIGITS    Z_IEEE_754_BINARY32_SIGNIFICAND_DIGITS
#		define Z_BFP32_EXPONENT_MAXIMUM	     Z_IEEE_754_BINARY32_EXPONENT_MAXIMUM
#		define Z_BFP32_EXPONENT_MINIMUM	     Z_IEEE_754_BINARY32_EXPONENT_MINIMUM
#		define Z_BFP32_EXPONENT_10_MAXIMUM   Z_IEEE_754_BINARY32_EXPONENT_10_MAXIMUM
#		define Z_BFP32_EXPONENT_10_MINIMUM   Z_IEEE_754_BINARY32_EXPONENT_10_MINIMUM
#		define Z_BFP32_EPSILON		     Z_BFP32(Z_IEEE_754_BINARY32_EPSILON)
#		define Z_BFP32_MAXIMUM		     Z_BFP32(Z_IEEE_754_BINARY32_MAXIMUM)
#		define Z_BFP32_MINIMUM		     Z_BFP32(Z_IEEE_754_BINARY32_MINIMUM)
#		define Z_BFP32_DENORMAL_MINIMUM	     Z_BFP32(Z_IEEE_754_BINARY32_DENORMAL_MINIMUM)

#	endif

#	if Z_FLOATING_POINT_HAS_TYPE(BFP64)

		typedef Z_FLOATING_POINT_TYPE(BFP64) zbfp64;
#		define Z_BFP64			     Z_FLOATING_POINT_LITERAL	 (BFP64)
#		define Z_BFP64_FUNDAMENTAL	     Z_FLOATING_POINT_FUNDAMENTAL(BFP64)
#		define Z_BFP64_FIXED_FUNDAMENTAL     Z_FUNDAMENTAL_BFP64
#		define Z_BFP64_NUMBER_FORMAT	     Z_NUMBER_FORMAT_IEEE_754_BINARY64
#		define Z_BFP64_BITS		     64
#		define Z_BFP64_DIGITS_10	     Z_IEEE_754_BINARY64_DIGITS_10
#		define Z_BFP64_MAXIMUM_DIGITS_10     Z_IEEE_754_BINARY64_MAXIMUM_DIGITS_10
#		define Z_BFP64_RADIX		     Z_IEEE_754_BINARY64_RADIX
#		define Z_BFP64_SIGNIFICAND_DIGITS    Z_IEEE_754_BINARY64_SIGNIFICAND_DIGITS
#		define Z_BFP64_EXPONENT_MAXIMUM	     Z_IEEE_754_BINARY64_EXPONENT_MAXIMUM
#		define Z_BFP64_EXPONENT_MINIMUM	     Z_IEEE_754_BINARY64_EXPONENT_MINIMUM
#		define Z_BFP64_EXPONENT_10_MAXIMUM   Z_IEEE_754_BINARY64_EXPONENT_10_MAXIMUM
#		define Z_BFP64_EXPONENT_10_MINIMUM   Z_IEEE_754_BINARY64_EXPONENT_10_MINIMUM
#		define Z_BFP64_EPSILON		     Z_BFP64(Z_IEEE_754_BINARY64_EPSILON)
#		define Z_BFP64_MAXIMUM		     Z_BFP64(Z_IEEE_754_BINARY64_MAXIMUM)
#		define Z_BFP64_MINIMUM		     Z_BFP64(Z_IEEE_754_BINARY64_MINIMUM)
#		define Z_BFP64_DENORMAL_MINIMUM	     Z_BFP64(Z_IEEE_754_BINARY64_DENORMAL_MINIMUM)

#	endif

#	if Z_FLOATING_POINT_HAS_TYPE(BFP128)

		typedef Z_FLOATING_POINT_TYPE(BFP128) zbfp128;
#		define Z_BFP128			      Z_FLOATING_POINT_LITERAL	  (BFP128)
#		define Z_BFP128_FUNDAMENTAL	      Z_FLOATING_POINT_FUNDAMENTAL(BFP128)
#		define Z_BFP128_FIXED_FUNDAMENTAL     Z_FUNDAMENTAL_BFP128
#		define Z_BFP128_NUMBER_FORMAT	      Z_NUMBER_FORMAT_IEEE_754_BINARY128
#		define Z_BFP128_BITS		      128
#		define Z_BFP128_DIGITS_10	      Z_IEEE_754_BINARY128_DIGITS_10
#		define Z_BFP128_MAXIMUM_DIGITS_10     Z_IEEE_754_BINARY128_MAXIMUM_DIGITS_10
#		define Z_BFP128_RADIX		      Z_IEEE_754_BINARY128_RADIX
#		define Z_BFP128_SIGNIFICAND_DIGITS    Z_IEEE_754_BINARY128_SIGNIFICAND_DIGITS
#		define Z_BFP128_EXPONENT_MAXIMUM      Z_IEEE_754_BINARY128_EXPONENT_MAXIMUM
#		define Z_BFP128_EXPONENT_MINIMUM      Z_IEEE_754_BINARY128_EXPONENT_MINIMUM
#		define Z_BFP128_EXPONENT_10_MAXIMUM   Z_IEEE_754_BINARY128_EXPONENT_10_MAXIMUM
#		define Z_BFP128_EXPONENT_10_MINIMUM   Z_IEEE_754_BINARY128_EXPONENT_10_MINIMUM
#		define Z_BFP128_EPSILON		      Z_BFP128(Z_IEEE_754_BINARY128_EPSILON)
#		define Z_BFP128_MAXIMUM		      Z_BFP128(Z_IEEE_754_BINARY128_MAXIMUM)
#		define Z_BFP128_MINIMUM		      Z_BFP128(Z_IEEE_754_BINARY128_MINIMUM)
#		define Z_BFP128_DENORMAL_MINIMUM      Z_BFP128(Z_IEEE_754_BINARY128_DENORMAL_MINIMUM)

#	endif

#	if Z_FLOATING_POINT_HAS_TYPE(DFP32)

		typedef Z_FLOATING_POINT_TYPE(DFP32) zdfp32;
#		define Z_DFP32			     Z_FLOATING_POINT_LITERAL	 (DFP32)
#		define Z_DFP32_FUNDAMENTAL	     Z_FLOATING_POINT_FUNDAMENTAL(DFP32)
#		define Z_DFP32_FIXED_FUNDAMENTAL     Z_FUNDAMENTAL_DFP32
#		define Z_DFP32_NUMBER_FORMAT	     Z_NUMBER_FORMAT_IEEE_754_DECIMAL32
#		define Z_DFP32_BITS		     32
#		define Z_DFP32_DIGITS_10	     Z_IEEE_754_DECIMAL32_DIGITS_10
#		define Z_DFP32_MAXIMUM_DIGITS_10     Z_IEEE_754_DECIMAL32_MAXIMUM_DIGITS_10
#		define Z_DFP32_RADIX		     Z_IEEE_754_DECIMAL32_RADIX
#		define Z_DFP32_SIGNIFICAND_DIGITS    Z_IEEE_754_DECIMAL32_SIGNIFICAND_DIGITS
#		define Z_DFP32_EXPONENT_MAXIMUM	     Z_IEEE_754_DECIMAL32_EXPONENT_MAXIMUM
#		define Z_DFP32_EXPONENT_MINIMUM	     Z_IEEE_754_DECIMAL32_EXPONENT_MINIMUM
#		define Z_DFP32_EXPONENT_10_MAXIMUM   Z_IEEE_754_DECIMAL32_EXPONENT_10_MAXIMUM
#		define Z_DFP32_EXPONENT_10_MINIMUM   Z_IEEE_754_DECIMAL32_EXPONENT_10_MINIMUM
#		define Z_DFP32_EPSILON		     Z_DFP32(Z_IEEE_754_DECIMAL32_EPSILON)
#		define Z_DFP32_MAXIMUM		     Z_DFP32(Z_IEEE_754_DECIMAL32_MAXIMUM)
#		define Z_DFP32_MINIMUM		     Z_DFP32(Z_IEEE_754_DECIMAL32_MINIMUM)
#		define Z_DFP32_DENORMAL_MINIMUM	     Z_DFP32(Z_IEEE_754_DECIMAL32_DENORMAL_MINIMUM)

#	endif

#	if Z_FLOATING_POINT_HAS_TYPE(DFP64)

		typedef Z_FLOATING_POINT_TYPE(DFP64) zdfp64;
#		define Z_DFP64			     Z_FLOATING_POINT_LITERAL	 (DFP64)
#		define Z_DFP64_FUNDAMENTAL	     Z_FLOATING_POINT_FUNDAMENTAL(DFP64)
#		define Z_DFP64_FIXED_FUNDAMENTAL     Z_FUNDAMENTAL_DFP64
#		define Z_DFP64_NUMBER_FORMAT	     Z_NUMBER_FORMAT_IEEE_754_DECIMAL64
#		define Z_DFP64_BITS		     64
#		define Z_DFP64_DIGITS_10	     Z_IEEE_754_DECIMAL64_DIGITS_10
#		define Z_DFP64_MAXIMUM_DIGITS_10     Z_IEEE_754_DECIMAL64_MAXIMUM_DIGITS_10
#		define Z_DFP64_RADIX		     Z_IEEE_754_DECIMAL64_RADIX
#		define Z_DFP64_SIGNIFICAND_DIGITS    Z_IEEE_754_DECIMAL64_SIGNIFICAND_DIGITS
#		define Z_DFP64_EXPONENT_MAXIMUM	     Z_IEEE_754_DECIMAL64_EXPONENT_MAXIMUM
#		define Z_DFP64_EXPONENT_MINIMUM	     Z_IEEE_754_DECIMAL64_EXPONENT_MINIMUM
#		define Z_DFP64_EXPONENT_10_MAXIMUM   Z_IEEE_754_DECIMAL64_EXPONENT_10_MAXIMUM
#		define Z_DFP64_EXPONENT_10_MINIMUM   Z_IEEE_754_DECIMAL64_EXPONENT_10_MINIMUM
#		define Z_DFP64_EPSILON		     Z_DFP64(Z_IEEE_754_DECIMAL64_EPSILON)
#		define Z_DFP64_MAXIMUM		     Z_DFP64(Z_IEEE_754_DECIMAL64_MAXIMUM)
#		define Z_DFP64_MINIMUM		     Z_DFP64(Z_IEEE_754_DECIMAL64_MINIMUM)
#		define Z_DFP64_DENORMAL_MINIMUM	     Z_DFP64(Z_IEEE_754_DECIMAL64_DENORMAL_MINIMUM)

#	endif

#	if Z_FLOATING_POINT_HAS_TYPE(DFP128)

		typedef Z_FLOATING_POINT_TYPE(DFP128) zdfp128;
#		define Z_DFP128			      Z_FLOATING_POINT_LITERAL	  (DFP128)
#		define Z_DFP128_FUNDAMENTAL	      Z_FLOATING_POINT_FUNDAMENTAL(DFP128)
#		define Z_DFP128_FIXED_FUNDAMENTAL     Z_FUNDAMENTAL_DFP128
#		define Z_DFP128_NUMBER_FORMAT	      Z_NUMBER_FORMAT_IEEE_754_DECIMAL128
#		define Z_DFP128_BITS		      128
#		define Z_DFP128_DIGITS_10	      Z_IEEE_754_DECIMAL128_DIGITS_10
#		define Z_DFP128_MAXIMUM_DIGITS_10     Z_IEEE_754_DECIMAL128_MAXIMUM_DIGITS_10
#		define Z_DFP128_RADIX		      Z_IEEE_754_DECIMAL128_RADIX
#		define Z_DFP128_SIGNIFICAND_DIGITS    Z_IEEE_754_DECIMAL128_SIGNIFICAND_DIGITS
#		define Z_DFP128_EXPONENT_MAXIMUM      Z_IEEE_754_DECIMAL128_EXPONENT_MAXIMUM
#		define Z_DFP128_EXPONENT_MINIMUM      Z_IEEE_754_DECIMAL128_EXPONENT_MINIMUM
#		define Z_DFP128_EXPONENT_10_MAXIMUM   Z_IEEE_754_DECIMAL128_EXPONENT_10_MAXIMUM
#		define Z_DFP128_EXPONENT_10_MINIMUM   Z_IEEE_754_DECIMAL128_EXPONENT_10_MINIMUM
#		define Z_DFP128_EPSILON		      Z_DFP128(Z_IEEE_754_DECIMAL128_EPSILON)
#		define Z_DFP128_MAXIMUM		      Z_DFP128(Z_IEEE_754_DECIMAL128_MAXIMUM)
#		define Z_DFP128_MINIMUM		      Z_DFP128(Z_IEEE_754_DECIMAL128_MINIMUM)
#		define Z_DFP128_DENORMAL_MINIMUM      Z_DFP128(Z_IEEE_754_DECIMAL128_DENORMAL_MINIMUM)

#	endif

#endif

#if	Z_FLOATING_POINT_HAS_TYPE(X87_DE80 ) || \
	Z_FLOATING_POINT_HAS_TYPE(X87_DE96 ) || \
	Z_FLOATING_POINT_HAS_TYPE(X87_DE128)

#	include <Z/formats/floating-point/x87.h>

#	if Z_FLOATING_POINT_HAS_TYPE(X87_DE80)

		typedef Z_FLOATING_POINT_TYPE(X87_DE80) zx87_de80;
#		define Z_X87_DE80			Z_FLOATING_POINT_LITERAL    (X87_DE80)
#		define Z_X87_DE80_FUNDAMENTAL		Z_FLOATING_POINT_FUNDAMENTAL(X87_DE80)
#		define Z_X87_DE80_FIXED_FUNDAMENTAL	Z_FUNDAMENTAL_X87_DE80
#		define Z_X87_DE80_NUMBER_FORMAT		Z_NUMBER_FORMAT_X87_DOUBLE_EXTENDED
#		define Z_X87_DE80_BITS			80
#		define Z_X87_DE80_DIGITS_10		Z_X87_DOUBLE_EXTENDED_DIGITS_10
#		define Z_X87_DE80_MAXIMUM_DIGITS_10	Z_X87_DOUBLE_EXTENDED_MAXIMUM_DIGITS_10
#		define Z_X87_DE80_RADIX			Z_X87_DOUBLE_EXTENDED_RADIX
#		define Z_X87_DE80_SIGNIFICAND_DIGITS	Z_X87_DOUBLE_EXTENDED_SIGNIFICAND_DIGITS
#		define Z_X87_DE80_EXPONENT_MAXIMUM	Z_X87_DOUBLE_EXTENDED_EXPONENT_MAXIMUM
#		define Z_X87_DE80_EXPONENT_MINIMUM	Z_X87_DOUBLE_EXTENDED_EXPONENT_MINIMUM
#		define Z_X87_DE80_EXPONENT_10_MAXIMUM	Z_X87_DOUBLE_EXTENDED_EXPONENT_10_MAXIMUM
#		define Z_X87_DE80_EXPONENT_10_MINIMUM	Z_X87_DOUBLE_EXTENDED_EXPONENT_10_MINIMUM
#		define Z_X87_DE80_EPSILON		Z_X87_DE80(Z_X87_DOUBLE_EXTENDED_EPSILON)
#		define Z_X87_DE80_MAXIMUM		Z_X87_DE80(Z_X87_DOUBLE_EXTENDED_MAXIMUM)
#		define Z_X87_DE80_MINIMUM		Z_X87_DE80(Z_X87_DOUBLE_EXTENDED_MINIMUM)
#		define Z_X87_DE80_DENORMAL_MINIMUM	Z_X87_DE80(Z_X87_DOUBLE_EXTENDED_DENORMAL_MINIMUM)

#	endif

#	if Z_FLOATING_POINT_HAS_TYPE(X87_DE96)

		typedef Z_FLOATING_POINT_TYPE(X87_DE96) zx87_de96;
#		define Z_X87_DE96			Z_FLOATING_POINT_LITERAL    (X87_DE96)
#		define Z_X87_DE96_FUNDAMENTAL		Z_FLOATING_POINT_FUNDAMENTAL(X87_DE96)
#		define Z_X87_DE96_FIXED_FUNDAMENTAL	Z_FUNDAMENTAL_X87_DE96
#		define Z_X87_DE96_NUMBER_FORMAT		Z_NUMBER_FORMAT_X87_DOUBLE_EXTENDED
#		define Z_X87_DE96_BITS			96
#		define Z_X87_DE96_DIGITS_10		Z_X87_DOUBLE_EXTENDED_DIGITS_10
#		define Z_X87_DE96_MAXIMUM_DIGITS_10	Z_X87_DOUBLE_EXTENDED_MAXIMUM_DIGITS_10
#		define Z_X87_DE96_RADIX			Z_X87_DOUBLE_EXTENDED_RADIX
#		define Z_X87_DE96_SIGNIFICAND_DIGITS	Z_X87_DOUBLE_EXTENDED_SIGNIFICAND_DIGITS
#		define Z_X87_DE96_EXPONENT_MAXIMUM	Z_X87_DOUBLE_EXTENDED_EXPONENT_MAXIMUM
#		define Z_X87_DE96_EXPONENT_MINIMUM	Z_X87_DOUBLE_EXTENDED_EXPONENT_MINIMUM
#		define Z_X87_DE96_EXPONENT_10_MAXIMUM	Z_X87_DOUBLE_EXTENDED_EXPONENT_10_MAXIMUM
#		define Z_X87_DE96_EXPONENT_10_MINIMUM	Z_X87_DOUBLE_EXTENDED_EXPONENT_10_MINIMUM
#		define Z_X87_DE96_EPSILON		Z_X87_DE96(Z_X87_DOUBLE_EXTENDED_EPSILON)
#		define Z_X87_DE96_MAXIMUM		Z_X87_DE96(Z_X87_DOUBLE_EXTENDED_MAXIMUM)
#		define Z_X87_DE96_MINIMUM		Z_X87_DE96(Z_X87_DOUBLE_EXTENDED_MINIMUM)
#		define Z_X87_DE96_DENORMAL_MINIMUM	Z_X87_DE96(Z_X87_DOUBLE_EXTENDED_DENORMAL_MINIMUM)

#	endif

#	if Z_FLOATING_POINT_HAS_TYPE(X87_DE128)

		typedef Z_FLOATING_POINT_TYPE(X87_DE128) zx87_de128;
#		define Z_X87_DE128			 Z_FLOATING_POINT_LITERAL    (X87_DE128)
#		define Z_X87_DE128_FUNDAMENTAL		 Z_FLOATING_POINT_FUNDAMENTAL(X87_DE128)
#		define Z_X87_DE128_FIXED_FUNDAMENTAL	 Z_FUNDAMENTAL_X87_DE128
#		define Z_X87_DE128_NUMBER_FORMAT	 Z_NUMBER_FORMAT_X87_DOUBLE_EXTENDED
#		define Z_X87_DE128_BITS			 128
#		define Z_X87_DE128_DIGITS_10		 Z_X87_DOUBLE_EXTENDED_DIGITS_10
#		define Z_X87_DE128_MAXIMUM_DIGITS_10	 Z_X87_DOUBLE_EXTENDED_MAXIMUM_DIGITS_10
#		define Z_X87_DE128_RADIX		 Z_X87_DOUBLE_EXTENDED_RADIX
#		define Z_X87_DE128_SIGNIFICAND_DIGITS	 Z_X87_DOUBLE_EXTENDED_SIGNIFICAND_DIGITS
#		define Z_X87_DE128_EXPONENT_MAXIMUM	 Z_X87_DOUBLE_EXTENDED_EXPONENT_MAXIMUM
#		define Z_X87_DE128_EXPONENT_MINIMUM	 Z_X87_DOUBLE_EXTENDED_EXPONENT_MINIMUM
#		define Z_X87_DE128_EXPONENT_10_MAXIMUM	 Z_X87_DOUBLE_EXTENDED_EXPONENT_10_MAXIMUM
#		define Z_X87_DE128_EXPONENT_10_MINIMUM	 Z_X87_DOUBLE_EXTENDED_EXPONENT_10_MINIMUM
#		define Z_X87_DE128_EPSILON		 Z_X87_DE128(Z_X87_DOUBLE_EXTENDED_EPSILON)
#		define Z_X87_DE128_MAXIMUM		 Z_X87_DE128(Z_X87_DOUBLE_EXTENDED_MAXIMUM)
#		define Z_X87_DE128_MINIMUM		 Z_X87_DE128(Z_X87_DOUBLE_EXTENDED_MINIMUM)
#		define Z_X87_DE128_DENORMAL_MINIMUM	 Z_X87_DE128(Z_X87_DOUBLE_EXTENDED_DENORMAL_MINIMUM)

#	endif

#endif

#if Z_FLOATING_POINT_HAS_TYPE(IBM_ED)

#	include <Z/formats/floating-point/IBM.h>

	typedef Z_FLOATING_POINT_TYPE(IBM_ED)	zibm_ed;
#	define Z_IBM_ED				Z_FLOATING_POINT_LITERAL    (IBM_ED)
#	define Z_IBM_ED_FUNDAMENTAL		Z_FLOATING_POINT_FUNDAMENTAL(IBM_ED)
#	define Z_IBM_ED_FIXED_FUNDAMENTAL	Z_FUNDAMENTAL_IBM_ED
#	define Z_IBM_ED_NUMBER_FORMAT		Z_NUMBER_FORMAT_IBM_EXTENDED_DOUBLE
#	define Z_IBM_ED_BITS			128
#	define Z_IBM_ED_DIGITS_10		Z_IBM_EXTENDED_DOUBLE_DIGITS_10
#	define Z_IBM_ED_MAXIMUM_DIGITS_10	Z_IBM_EXTENDED_DOUBLE_MAXIMUM_DIGITS_10
#	define Z_IBM_ED_RADIX			Z_IBM_EXTENDED_DOUBLE_RADIX
#	define Z_IBM_ED_SIGNIFICAND_DIGITS	Z_IBM_EXTENDED_DOUBLE_SIGNIFICAND_DIGITS
#	define Z_IBM_ED_EXPONENT_MAXIMUM	Z_IBM_EXTENDED_DOUBLE_EXPONENT_MAXIMUM
#	define Z_IBM_ED_EXPONENT_MINIMUM	Z_IBM_EXTENDED_DOUBLE_EXPONENT_MINIMUM
#	define Z_IBM_ED_EXPONENT_10_MAXIMUM	Z_IBM_EXTENDED_DOUBLE_EXPONENT_10_MAXIMUM
#	define Z_IBM_ED_EXPONENT_10_MINIMUM	Z_IBM_EXTENDED_DOUBLE_EXPONENT_10_MINIMUM
#	define Z_IBM_ED_EPSILON			Z_IBM_ED(Z_IBM_EXTENDED_DOUBLE_EPSILON)
#	define Z_IBM_ED_MAXIMUM			Z_IBM_ED(Z_IBM_EXTENDED_DOUBLE_MAXIMUM)
#	define Z_IBM_ED_MINIMUM			Z_IBM_ED(Z_IBM_EXTENDED_DOUBLE_MINIMUM)
#	define Z_IBM_ED_DENORMAL_MINIMUM	Z_IBM_ED(Z_IBM_EXTENDED_DOUBLE_DENORMAL_MINIMUM)

#endif

#if Z_FLOATING_POINT_HAS_TYPE(BFLOAT16)

#	include <Z/formats/floating-point/Brain Floating-Point.h>

	typedef Z_FLOATING_POINT_TYPE(BFLOAT16)	zbfloat16;
#	define Z_BFLOAT16			Z_FLOATING_POINT_LITERAL    (BFLOAT16)
#	define Z_BFLOAT16_FUNDAMENTAL		Z_FLOATING_POINT_FUNDAMENTAL(BFLOAT16)
#	define Z_BFLOAT16_FIXED_FUNDAMENTAL	Z_FUNDAMENTAL_BFLOAT16
#	define Z_BFLOAT16_NUMBER_FORMAT		Z_NUMBER_FORMAT_BRAIN_FLOATING_POINT
#	define Z_BFLOAT16_BITS			16
#	define Z_BFLOAT16_DIGITS_10		Z_BRAIN_FLOATING_POINT_DIGITS_10
#	define Z_BFLOAT16_MAXIMUM_DIGITS_10	Z_BRAIN_FLOATING_POINT_MAXIMUM_DIGITS_10
#	define Z_BFLOAT16_RADIX			Z_BRAIN_FLOATING_POINT_RADIX
#	define Z_BFLOAT16_SIGNIFICAND_DIGITS	Z_BRAIN_FLOATING_POINT_SIGNIFICAND_DIGITS
#	define Z_BFLOAT16_EXPONENT_MAXIMUM	Z_BRAIN_FLOATING_POINT_EXPONENT_MAXIMUM
#	define Z_BFLOAT16_EXPONENT_MINIMUM	Z_BRAIN_FLOATING_POINT_EXPONENT_MINIMUM
#	define Z_BFLOAT16_EXPONENT_10_MAXIMUM	Z_BRAIN_FLOATING_POINT_EXPONENT_10_MAXIMUM
#	define Z_BFLOAT16_EXPONENT_10_MINIMUM	Z_BRAIN_FLOATING_POINT_EXPONENT_10_MINIMUM
#	define Z_BFLOAT16_EPSILON		Z_BFLOAT16(Z_BRAIN_FLOATING_POINT_EPSILON)
#	define Z_BFLOAT16_MAXIMUM		Z_BFLOAT16(Z_BRAIN_FLOATING_POINT_MAXIMUM)
#	define Z_BFLOAT16_MINIMUM		Z_BFLOAT16(Z_BRAIN_FLOATING_POINT_MINIMUM)
#	define Z_BFLOAT16_DENORMAL_MINIMUM	Z_BFLOAT16(Z_BRAIN_FLOATING_POINT_DENORMAL_MINIMUM)

#endif

/* MARK: - Selection macros */

#ifndef Z_TYPE_BITS
#	define Z_TYPE_NUMBER_FORMAT(TYPE) Z_INSERT_TYPE(Z_##TYPE##_FIXED_FUNDAMENTAL)(Z_, _NUMBER_FORMAT)
#	define Z_TYPE_BITS(	    TYPE) Z_INSERT_TYPE(Z_##TYPE##_FIXED_FUNDAMENTAL)(Z_, _BITS		)
#endif

#define Z_REAL_TYPE(			TYPE) Z_APPEND_type(Z_##TYPE##_FUNDAMENTAL	)(z )
#define Z_REAL_TYPE_LITERAL(		TYPE) Z_APPEND_TYPE(Z_##TYPE##_FUNDAMENTAL	)(Z_)
#define Z_REAL_TYPE_FIXED_FUNDAMENTAL(	TYPE) Z_INSERT_TYPE(Z_##TYPE##_FUNDAMENTAL	)(Z_, _FIXED_FUNDAMENTAL  )
#define Z_REAL_TYPE_DIGITS_10(		TYPE) Z_INSERT_TYPE(Z_##TYPE##_FIXED_FUNDAMENTAL)(Z_, _DIGITS_10	  )
#define Z_REAL_TYPE_MAXIMUM_DIGITS_10(	TYPE) Z_INSERT_TYPE(Z_##TYPE##_FIXED_FUNDAMENTAL)(Z_, _MAXIMUM_DIGITS_10  )
#define Z_REAL_TYPE_RADIX(		TYPE) Z_INSERT_TYPE(Z_##TYPE##_FIXED_FUNDAMENTAL)(Z_, _RADIX		  )
#define Z_REAL_TYPE_SIGNIFICAND_DIGITS( TYPE) Z_INSERT_TYPE(Z_##TYPE##_FIXED_FUNDAMENTAL)(Z_, _SIGNIFICAND_DIGITS )
#define Z_REAL_TYPE_EXPONENT_MAXIMUM(	TYPE) Z_INSERT_TYPE(Z_##TYPE##_FIXED_FUNDAMENTAL)(Z_, _EXPONENT_MAXIMUM   )
#define Z_REAL_TYPE_EXPONENT_MINIMUM(	TYPE) Z_INSERT_TYPE(Z_##TYPE##_FIXED_FUNDAMENTAL)(Z_, _EXPONENT_MINIMUM   )
#define Z_REAL_TYPE_EXPONENT_10_MAXIMUM(TYPE) Z_INSERT_TYPE(Z_##TYPE##_FIXED_FUNDAMENTAL)(Z_, _EXPONENT_10_MAXIMUM)
#define Z_REAL_TYPE_EXPONENT_10_MINIMUM(TYPE) Z_INSERT_TYPE(Z_##TYPE##_FIXED_FUNDAMENTAL)(Z_, _EXPONENT_10_MINIMUM)
#define Z_REAL_TYPE_EPSILON(		TYPE) Z_##TYPE(Z_INSERT_NUMBER_FORMAT(Z_##TYPE##_NUMBER_FORMAT)(Z_, _EPSILON	     ))
#define Z_REAL_TYPE_MAXIMUM(		TYPE) Z_##TYPE(Z_INSERT_NUMBER_FORMAT(Z_##TYPE##_NUMBER_FORMAT)(Z_, _MAXIMUM	     ))
#define Z_REAL_TYPE_MINIMUM(		TYPE) Z_##TYPE(Z_INSERT_NUMBER_FORMAT(Z_##TYPE##_NUMBER_FORMAT)(Z_, _MINIMUM	     ))
#define Z_REAL_TYPE_DENORMAL_MINIMUM(	TYPE) Z_##TYPE(Z_INSERT_NUMBER_FORMAT(Z_##TYPE##_NUMBER_FORMAT)(Z_, _DENORMAL_MINIMUM))

/* MARK: - Standard real types */

#if Z_DIALECT_HAS_TYPE(C, FLOAT)

	typedef float			   zfloat;
#	define Z_FLOAT			   Z_SUFFIX_F
#	define Z_FLOAT_FUNDAMENTAL	   Z_FUNDAMENTAL_FLOAT
#	define Z_FLOAT_FIXED_FUNDAMENTAL   Z_FLOATING_POINT_FIXED_FUNDAMENTAL(FLOAT)
#	define Z_FLOAT_NUMBER_FORMAT	   Z_TYPE_NUMBER_FORMAT		     (FLOAT)
#	define Z_FLOAT_BITS		   Z_TYPE_BITS			     (FLOAT)
#	define Z_FLOAT_DIGITS_10	   Z_REAL_TYPE_DIGITS_10	     (FLOAT)
#	define Z_FLOAT_MAXIMUM_DIGITS_10   Z_REAL_TYPE_MAXIMUM_DIGITS_10     (FLOAT)
#	define Z_FLOAT_RADIX		   Z_REAL_TYPE_RADIX		     (FLOAT)
#	define Z_FLOAT_SIGNIFICAND_DIGITS  Z_REAL_TYPE_SIGNIFICAND_DIGITS    (FLOAT)
#	define Z_FLOAT_EXPONENT_MAXIMUM	   Z_REAL_TYPE_EXPONENT_MAXIMUM	     (FLOAT)
#	define Z_FLOAT_EXPONENT_MINIMUM	   Z_REAL_TYPE_EXPONENT_MINIMUM	     (FLOAT)
#	define Z_FLOAT_EXPONENT_10_MAXIMUM Z_REAL_TYPE_EXPONENT_10_MAXIMUM   (FLOAT)
#	define Z_FLOAT_EXPONENT_10_MINIMUM Z_REAL_TYPE_EXPONENT_10_MINIMUM   (FLOAT)
#	define Z_FLOAT_EPSILON		   Z_REAL_TYPE_EPSILON		     (FLOAT)
#	define Z_FLOAT_MAXIMUM		   Z_REAL_TYPE_MAXIMUM		     (FLOAT)
#	define Z_FLOAT_MINIMUM		   Z_REAL_TYPE_MINIMUM		     (FLOAT)
#	define Z_FLOAT_DENORMAL_MINIMUM	   Z_REAL_TYPE_DENORMAL_MINIMUM	     (FLOAT)

#endif

#if Z_DIALECT_HAS_TYPE(C, DOUBLE)

	typedef double			    zdouble;
#	define Z_DOUBLE			    Z_SAME
#	define Z_DOUBLE_FUNDAMENTAL	    Z_FUNDAMENTAL_DOUBLE
#	define Z_DOUBLE_FIXED_FUNDAMENTAL   Z_FLOATING_POINT_FIXED_FUNDAMENTAL(DOUBLE)
#	define Z_DOUBLE_NUMBER_FORMAT	    Z_TYPE_NUMBER_FORMAT	      (DOUBLE)
#	define Z_DOUBLE_BITS		    Z_TYPE_BITS			      (DOUBLE)
#	define Z_DOUBLE_DIGITS_10	    Z_REAL_TYPE_DIGITS_10	      (DOUBLE)
#	define Z_DOUBLE_MAXIMUM_DIGITS_10   Z_REAL_TYPE_MAXIMUM_DIGITS_10     (DOUBLE)
#	define Z_DOUBLE_RADIX		    Z_REAL_TYPE_RADIX		      (DOUBLE)
#	define Z_DOUBLE_SIGNIFICAND_DIGITS  Z_REAL_TYPE_SIGNIFICAND_DIGITS    (DOUBLE)
#	define Z_DOUBLE_EXPONENT_MAXIMUM    Z_REAL_TYPE_EXPONENT_MAXIMUM      (DOUBLE)
#	define Z_DOUBLE_EXPONENT_MINIMUM    Z_REAL_TYPE_EXPONENT_MINIMUM      (DOUBLE)
#	define Z_DOUBLE_EXPONENT_10_MAXIMUM Z_REAL_TYPE_EXPONENT_10_MAXIMUM   (DOUBLE)
#	define Z_DOUBLE_EXPONENT_10_MINIMUM Z_REAL_TYPE_EXPONENT_10_MINIMUM   (DOUBLE)
#	define Z_DOUBLE_EPSILON		    Z_REAL_TYPE_EPSILON		      (DOUBLE)
#	define Z_DOUBLE_MAXIMUM		    Z_REAL_TYPE_MAXIMUM		      (DOUBLE)
#	define Z_DOUBLE_MINIMUM		    Z_REAL_TYPE_MINIMUM		      (DOUBLE)
#	define Z_DOUBLE_DENORMAL_MINIMUM    Z_REAL_TYPE_DENORMAL_MINIMUM      (DOUBLE)

#endif

#if Z_DIALECT_HAS_TYPE(C, LONG_DOUBLE) || Z_DIALECT_HAS_TYPE(CPP, LONG_DOUBLE)

	typedef long double		     zldouble;
#	define Z_LDOUBLE		     Z_SUFFIX_L
#	define Z_LDOUBLE_FUNDAMENTAL	     Z_FUNDAMENTAL_LDOUBLE
#	define Z_LDOUBLE_FIXED_FUNDAMENTAL   Z_FLOATING_POINT_FIXED_FUNDAMENTAL(LDOUBLE)
#	define Z_LDOUBLE_NUMBER_FORMAT	     Z_TYPE_NUMBER_FORMAT	       (LDOUBLE)
#	define Z_LDOUBLE_BITS		     Z_TYPE_BITS		       (LDOUBLE)
#	define Z_LDOUBLE_DIGITS_10	     Z_REAL_TYPE_DIGITS_10	       (LDOUBLE)
#	define Z_LDOUBLE_MAXIMUM_DIGITS_10   Z_REAL_TYPE_MAXIMUM_DIGITS_10     (LDOUBLE)
#	define Z_LDOUBLE_RADIX		     Z_REAL_TYPE_RADIX		       (LDOUBLE)
#	define Z_LDOUBLE_SIGNIFICAND_DIGITS  Z_REAL_TYPE_SIGNIFICAND_DIGITS    (LDOUBLE)
#	define Z_LDOUBLE_EXPONENT_MAXIMUM    Z_REAL_TYPE_EXPONENT_MAXIMUM      (LDOUBLE)
#	define Z_LDOUBLE_EXPONENT_MINIMUM    Z_REAL_TYPE_EXPONENT_MINIMUM      (LDOUBLE)
#	define Z_LDOUBLE_EXPONENT_10_MAXIMUM Z_REAL_TYPE_EXPONENT_10_MAXIMUM   (LDOUBLE)
#	define Z_LDOUBLE_EXPONENT_10_MINIMUM Z_REAL_TYPE_EXPONENT_10_MINIMUM   (LDOUBLE)
#	define Z_LDOUBLE_EPSILON	     Z_REAL_TYPE_EPSILON	       (LDOUBLE)
#	define Z_LDOUBLE_MAXIMUM	     Z_REAL_TYPE_MAXIMUM	       (LDOUBLE)
#	define Z_LDOUBLE_MINIMUM	     Z_REAL_TYPE_MINIMUM	       (LDOUBLE)
#	define Z_LDOUBLE_DENORMAL_MINIMUM    Z_REAL_TYPE_DENORMAL_MINIMUM      (LDOUBLE)

#endif

#if Z_DIALECT_HAS_TYPE(C, FLOAT16)

	typedef _Float16		     zfloat16;
#	define Z_FLOAT16		     Z_SUFFIX_F16
#	define Z_FLOAT16_FUNDAMENTAL	     Z_FUNDAMENTAL_FLOAT16
#	define Z_FLOAT16_FIXED_FUNDAMENTAL   Z_FUNDAMENTAL_BFP16
#	define Z_FLOAT16_NUMBER_FORMAT	     Z_NUMBER_FORMAT_IEEE_754_BINARY16
#	define Z_FLOAT16_BITS		     16
#	define Z_FLOAT16_DIGITS_10	     Z_IEEE_754_BINARY16_DIGITS_10
#	define Z_FLOAT16_MAXIMUM_DIGITS_10   Z_IEEE_754_BINARY16_MAXIMUM_DIGITS_10
#	define Z_FLOAT16_RADIX		     Z_IEEE_754_BINARY16_RADIX
#	define Z_FLOAT16_SIGNIFICAND_DIGITS  Z_IEEE_754_BINARY16_SIGNIFICAND_DIGITS
#	define Z_FLOAT16_EXPONENT_MAXIMUM    Z_IEEE_754_BINARY16_EXPONENT_MAXIMUM
#	define Z_FLOAT16_EXPONENT_MINIMUM    Z_IEEE_754_BINARY16_EXPONENT_MINIMUM
#	define Z_FLOAT16_EXPONENT_10_MAXIMUM Z_IEEE_754_BINARY16_EXPONENT_10_MAXIMUM
#	define Z_FLOAT16_EXPONENT_10_MINIMUM Z_IEEE_754_BINARY16_EXPONENT_10_MINIMUM
#	define Z_FLOAT16_EPSILON	     Z_FLOAT16(Z_IEEE_754_BINARY16_EPSILON)
#	define Z_FLOAT16_MAXIMUM	     Z_FLOAT16(Z_IEEE_754_BINARY16_MAXIMUM)
#	define Z_FLOAT16_MINIMUM	     Z_FLOAT16(Z_IEEE_754_BINARY16_MINIMUM)
#	define Z_FLOAT16_DENORMAL_MINIMUM    Z_FLOAT16(Z_IEEE_754_BINARY16_DENORMAL_MINIMUM)

#endif

#if Z_DIALECT_HAS_TYPE(C, FLOAT32)

	typedef _Float32		     zfloat32;
#	define Z_FLOAT32		     Z_SUFFIX_F32
#	define Z_FLOAT32_FUNDAMENTAL	     Z_FUNDAMENTAL_FLOAT32
#	define Z_FLOAT32_FIXED_FUNDAMENTAL   Z_FUNDAMENTAL_BFP32
#	define Z_FLOAT32_NUMBER_FORMAT	     Z_NUMBER_FORMAT_IEEE_754_BINARY32
#	define Z_FLOAT32_BITS		     32
#	define Z_FLOAT32_DIGITS_10	     Z_IEEE_754_BINARY32_DIGITS_10
#	define Z_FLOAT32_MAXIMUM_DIGITS_10   Z_IEEE_754_BINARY32_MAXIMUM_DIGITS_10
#	define Z_FLOAT32_RADIX		     Z_IEEE_754_BINARY32_RADIX
#	define Z_FLOAT32_SIGNIFICAND_DIGITS  Z_IEEE_754_BINARY32_SIGNIFICAND_DIGITS
#	define Z_FLOAT32_EXPONENT_MAXIMUM    Z_IEEE_754_BINARY32_EXPONENT_MAXIMUM
#	define Z_FLOAT32_EXPONENT_MINIMUM    Z_IEEE_754_BINARY32_EXPONENT_MINIMUM
#	define Z_FLOAT32_EXPONENT_10_MAXIMUM Z_IEEE_754_BINARY32_EXPONENT_10_MAXIMUM
#	define Z_FLOAT32_EXPONENT_10_MINIMUM Z_IEEE_754_BINARY32_EXPONENT_10_MINIMUM
#	define Z_FLOAT32_EPSILON	     Z_FLOAT32(Z_IEEE_754_BINARY32_EPSILON)
#	define Z_FLOAT32_MAXIMUM	     Z_FLOAT32(Z_IEEE_754_BINARY32_MAXIMUM)
#	define Z_FLOAT32_MINIMUM	     Z_FLOAT32(Z_IEEE_754_BINARY32_MINIMUM)
#	define Z_FLOAT32_DENORMAL_MINIMUM    Z_FLOAT32(Z_IEEE_754_BINARY32_DENORMAL_MINIMUM)

#endif

#if Z_DIALECT_HAS_TYPE(C, FLOAT64)

	typedef _Float64		     zfloat64;
#	define Z_FLOAT64		     Z_SUFFIX_F64
#	define Z_FLOAT64_FUNDAMENTAL	     Z_FUNDAMENTAL_FLOAT64
#	define Z_FLOAT64_FIXED_FUNDAMENTAL   Z_FUNDAMENTAL_BFP64
#	define Z_FLOAT64_NUMBER_FORMAT	     Z_NUMBER_FORMAT_IEEE_754_BINARY64
#	define Z_FLOAT64_BITS		     64
#	define Z_FLOAT64_DIGITS_10	     Z_IEEE_754_BINARY64_DIGITS_10
#	define Z_FLOAT64_MAXIMUM_DIGITS_10   Z_IEEE_754_BINARY64_MAXIMUM_DIGITS_10
#	define Z_FLOAT64_RADIX		     Z_IEEE_754_BINARY64_RADIX
#	define Z_FLOAT64_SIGNIFICAND_DIGITS  Z_IEEE_754_BINARY64_SIGNIFICAND_DIGITS
#	define Z_FLOAT64_EXPONENT_MAXIMUM    Z_IEEE_754_BINARY64_EXPONENT_MAXIMUM
#	define Z_FLOAT64_EXPONENT_MINIMUM    Z_IEEE_754_BINARY64_EXPONENT_MINIMUM
#	define Z_FLOAT64_EXPONENT_10_MAXIMUM Z_IEEE_754_BINARY64_EXPONENT_10_MAXIMUM
#	define Z_FLOAT64_EXPONENT_10_MINIMUM Z_IEEE_754_BINARY64_EXPONENT_10_MINIMUM
#	define Z_FLOAT64_EPSILON	     Z_FLOAT64(Z_IEEE_754_BINARY64_EPSILON)
#	define Z_FLOAT64_MAXIMUM	     Z_FLOAT64(Z_IEEE_754_BINARY64_MAXIMUM)
#	define Z_FLOAT64_MINIMUM	     Z_FLOAT64(Z_IEEE_754_BINARY64_MINIMUM)
#	define Z_FLOAT64_DENORMAL_MINIMUM    Z_FLOAT64(Z_IEEE_754_BINARY64_DENORMAL_MINIMUM)

#endif

#if Z_DIALECT_HAS_TYPE(C, FLOAT128)

	typedef _Float128		      zfloat128;
#	define Z_FLOAT128		      Z_SUFFIX_F128
#	define Z_FLOAT128_FUNDAMENTAL	      Z_FUNDAMENTAL_FLOAT128
#	define Z_FLOAT128_FIXED_FUNDAMENTAL   Z_FUNDAMENTAL_BFP128
#	define Z_FLOAT128_NUMBER_FORMAT	      Z_NUMBER_FORMAT_IEEE_754_BINARY128
#	define Z_FLOAT128_BITS		      128
#	define Z_FLOAT128_DIGITS_10	      Z_IEEE_754_BINARY128_DIGITS_10
#	define Z_FLOAT128_MAXIMUM_DIGITS_10   Z_IEEE_754_BINARY128_MAXIMUM_DIGITS_10
#	define Z_FLOAT128_RADIX		      Z_IEEE_754_BINARY128_RADIX
#	define Z_FLOAT128_SIGNIFICAND_DIGITS  Z_IEEE_754_BINARY128_SIGNIFICAND_DIGITS
#	define Z_FLOAT128_EXPONENT_MAXIMUM    Z_IEEE_754_BINARY128_EXPONENT_MAXIMUM
#	define Z_FLOAT128_EXPONENT_MINIMUM    Z_IEEE_754_BINARY128_EXPONENT_MINIMUM
#	define Z_FLOAT128_EXPONENT_10_MAXIMUM Z_IEEE_754_BINARY128_EXPONENT_10_MAXIMUM
#	define Z_FLOAT128_EXPONENT_10_MINIMUM Z_IEEE_754_BINARY128_EXPONENT_10_MINIMUM
#	define Z_FLOAT128_EPSILON	      Z_FLOAT128(Z_IEEE_754_BINARY128_EPSILON)
#	define Z_FLOAT128_MAXIMUM	      Z_FLOAT128(Z_IEEE_754_BINARY128_MAXIMUM)
#	define Z_FLOAT128_MINIMUM	      Z_FLOAT128(Z_IEEE_754_BINARY128_MINIMUM)
#	define Z_FLOAT128_DENORMAL_MINIMUM    Z_FLOAT128(Z_IEEE_754_BINARY128_DENORMAL_MINIMUM)

#endif

#if Z_DIALECT_HAS_TYPE(C, FLOAT32X)

	typedef _Float32x		      zfloat32x;
#	define Z_FLOAT32X		      Z_SUFFIX_F32x
#	define Z_FLOAT32X_FUNDAMENTAL	      Z_FUNDAMENTAL_FLOAT32X
#	define Z_FLOAT32X_FIXED_FUNDAMENTAL   Z_FLOATING_POINT_FIXED_FUNDAMENTAL(FLOAT32X)
#	define Z_FLOAT32X_NUMBER_FORMAT	      Z_TYPE_NUMBER_FORMAT		(FLOAT32X)
#	define Z_FLOAT32X_BITS		      Z_TYPE_BITS			(FLOAT32X)
#	define Z_FLOAT32X_DIGITS_10	      Z_REAL_TYPE_DIGITS_10		(FLOAT32X)
#	define Z_FLOAT32X_MAXIMUM_DIGITS_10   Z_REAL_TYPE_MAXIMUM_DIGITS_10	(FLOAT32X)
#	define Z_FLOAT32X_RADIX		      Z_REAL_TYPE_RADIX			(FLOAT32X)
#	define Z_FLOAT32X_SIGNIFICAND_DIGITS  Z_REAL_TYPE_SIGNIFICAND_DIGITS	(FLOAT32X)
#	define Z_FLOAT32X_EXPONENT_MAXIMUM    Z_REAL_TYPE_EXPONENT_MAXIMUM	(FLOAT32X)
#	define Z_FLOAT32X_EXPONENT_MINIMUM    Z_REAL_TYPE_EXPONENT_MINIMUM	(FLOAT32X)
#	define Z_FLOAT32X_EXPONENT_10_MAXIMUM Z_REAL_TYPE_EXPONENT_10_MAXIMUM	(FLOAT32X)
#	define Z_FLOAT32X_EXPONENT_10_MINIMUM Z_REAL_TYPE_EXPONENT_10_MINIMUM	(FLOAT32X)
#	define Z_FLOAT32X_EPSILON	      Z_REAL_TYPE_EPSILON		(FLOAT32X)
#	define Z_FLOAT32X_MAXIMUM	      Z_REAL_TYPE_MAXIMUM		(FLOAT32X)
#	define Z_FLOAT32X_MINIMUM	      Z_REAL_TYPE_MINIMUM		(FLOAT32X)
#	define Z_FLOAT32X_DENORMAL_MINIMUM    Z_REAL_TYPE_DENORMAL_MINIMUM	(FLOAT32X)

#endif

#if Z_DIALECT_HAS_TYPE(C, FLOAT64X)

	typedef _Float64x		      zfloat64x;
#	define Z_FLOAT64X		      Z_SUFFIX_F64x
#	define Z_FLOAT64X_FUNDAMENTAL	      Z_FUNDAMENTAL_FLOAT64X
#	define Z_FLOAT64X_FIXED_FUNDAMENTAL   Z_FLOATING_POINT_FIXED_FUNDAMENTAL(FLOAT64X)
#	define Z_FLOAT64X_NUMBER_FORMAT	      Z_TYPE_NUMBER_FORMAT		(FLOAT64X)
#	define Z_FLOAT64X_BITS		      Z_TYPE_BITS			(FLOAT64X)
#	define Z_FLOAT32X_DIGITS_10	      Z_REAL_TYPE_DIGITS_10		(FLOAT64X)
#	define Z_FLOAT32X_MAXIMUM_DIGITS_10   Z_REAL_TYPE_MAXIMUM_DIGITS_10	(FLOAT64X)
#	define Z_FLOAT32X_RADIX		      Z_REAL_TYPE_RADIX			(FLOAT64X)
#	define Z_FLOAT32X_SIGNIFICAND_DIGITS  Z_REAL_TYPE_SIGNIFICAND_DIGITS	(FLOAT64X)
#	define Z_FLOAT32X_EXPONENT_MAXIMUM    Z_REAL_TYPE_EXPONENT_MAXIMUM	(FLOAT64X)
#	define Z_FLOAT32X_EXPONENT_MINIMUM    Z_REAL_TYPE_EXPONENT_MINIMUM	(FLOAT64X)
#	define Z_FLOAT32X_EXPONENT_10_MAXIMUM Z_REAL_TYPE_EXPONENT_10_MAXIMUM	(FLOAT64X)
#	define Z_FLOAT32X_EXPONENT_10_MINIMUM Z_REAL_TYPE_EXPONENT_10_MINIMUM	(FLOAT64X)
#	define Z_FLOAT32X_EPSILON	      Z_REAL_TYPE_EPSILON		(FLOAT64X)
#	define Z_FLOAT32X_MAXIMUM	      Z_REAL_TYPE_MAXIMUM		(FLOAT64X)
#	define Z_FLOAT32X_MINIMUM	      Z_REAL_TYPE_MINIMUM		(FLOAT64X)
#	define Z_FLOAT32X_DENORMAL_MINIMUM    Z_REAL_TYPE_DENORMAL_MINIMUM	(FLOAT64X)

#endif

#if Z_DIALECT_HAS_TYPE(C, FLOAT128X)

	typedef _Float128x		       zfloat128x;
#	define Z_FLOAT128X		       Z_SUFFIX_F128x
#	define Z_FLOAT128X_FUNDAMENTAL	       Z_FUNDAMENTAL_FLOAT128X
#	define Z_FLOAT128X_FIXED_FUNDAMENTAL   Z_FLOATING_POINT_FIXED_FUNDAMENTAL(FLOAT128X)
#	define Z_FLOAT128X_NUMBER_FORMAT       Z_TYPE_NUMBER_FORMAT		 (FLOAT128X)
#	define Z_FLOAT128X_BITS		       Z_TYPE_BITS			 (FLOAT128X)
#	define Z_FLOAT128X_DIGITS_10	       Z_REAL_TYPE_DIGITS_10		 (FLOAT128X)
#	define Z_FLOAT128X_MAXIMUM_DIGITS_10   Z_REAL_TYPE_MAXIMUM_DIGITS_10	 (FLOAT128X)
#	define Z_FLOAT128X_RADIX	       Z_REAL_TYPE_RADIX		 (FLOAT128X)
#	define Z_FLOAT128X_SIGNIFICAND_DIGITS  Z_REAL_TYPE_SIGNIFICAND_DIGITS	 (FLOAT128X)
#	define Z_FLOAT128X_EXPONENT_MAXIMUM    Z_REAL_TYPE_EXPONENT_MAXIMUM	 (FLOAT128X)
#	define Z_FLOAT128X_EXPONENT_MINIMUM    Z_REAL_TYPE_EXPONENT_MINIMUM	 (FLOAT128X)
#	define Z_FLOAT128X_EXPONENT_10_MAXIMUM Z_REAL_TYPE_EXPONENT_10_MAXIMUM	 (FLOAT128X)
#	define Z_FLOAT128X_EXPONENT_10_MINIMUM Z_REAL_TYPE_EXPONENT_10_MINIMUM	 (FLOAT128X)
#	define Z_FLOAT128X_EPSILON	       Z_REAL_TYPE_EPSILON		 (FLOAT128X)
#	define Z_FLOAT128X_MAXIMUM	       Z_REAL_TYPE_MAXIMUM		 (FLOAT128X)
#	define Z_FLOAT128X_MINIMUM	       Z_REAL_TYPE_MINIMUM		 (FLOAT128X)
#	define Z_FLOAT128X_DENORMAL_MINIMUM    Z_REAL_TYPE_DENORMAL_MINIMUM	 (FLOAT128X)

#endif

#if Z_DIALECT_HAS_TYPE(C, DECIMAL32)

	typedef _Decimal32		       zdecimal32;
#	define Z_DECIMAL32		       Z_SUFFIX_DF
#	define Z_DECIMAL32_FUNDAMENTAL	       Z_FUNDAMENTAL_DECIMAL32
#	define Z_DECIMAL32_FIXED_FUNDAMENTAL   Z_FUNDAMENTAL_DFP32
#	define Z_DECIMAL32_NUMBER_FORMAT       Z_NUMBER_FORMAT_IEEE_754_DECIMAL32
#	define Z_DECIMAL32_BITS		       32
#	define Z_DECIMAL32_DIGITS_10	       Z_IEEE_754_DECIMAL32_DIGITS_10
#	define Z_DECIMAL32_MAXIMUM_DIGITS_10   Z_IEEE_754_DECIMAL32_MAXIMUM_DIGITS_10
#	define Z_DECIMAL32_RADIX	       Z_IEEE_754_DECIMAL32_RADIX
#	define Z_DECIMAL32_SIGNIFICAND_DIGITS  Z_IEEE_754_DECIMAL32_SIGNIFICAND_DIGITS
#	define Z_DECIMAL32_EXPONENT_MAXIMUM    Z_IEEE_754_DECIMAL32_EXPONENT_MAXIMUM
#	define Z_DECIMAL32_EXPONENT_MINIMUM    Z_IEEE_754_DECIMAL32_EXPONENT_MINIMUM
#	define Z_DECIMAL32_EXPONENT_10_MAXIMUM Z_IEEE_754_DECIMAL32_EXPONENT_10_MAXIMUM
#	define Z_DECIMAL32_EXPONENT_10_MINIMUM Z_IEEE_754_DECIMAL32_EXPONENT_10_MINIMUM
#	define Z_DECIMAL32_EPSILON	       Z_DECIMAL32(Z_IEEE_754_DECIMAL32_EPSILON)
#	define Z_DECIMAL32_MAXIMUM	       Z_DECIMAL32(Z_IEEE_754_DECIMAL32_MAXIMUM)
#	define Z_DECIMAL32_MINIMUM	       Z_DECIMAL32(Z_IEEE_754_DECIMAL32_MINIMUM)
#	define Z_DECIMAL32_DENORMAL_MINIMUM    Z_DECIMAL32(Z_IEEE_754_DECIMAL32_DENORMAL_MINIMUM)

#endif

#if Z_DIALECT_HAS_TYPE(C, DECIMAL64)

	typedef _Decimal64		       zdecimal64;
#	define Z_DECIMAL64		       Z_SUFFIX_DD
#	define Z_DECIMAL64_FUNDAMENTAL	       Z_FUNDAMENTAL_DECIMAL64
#	define Z_DECIMAL64_FIXED_FUNDAMENTAL   Z_FUNDAMENTAL_DFP64
#	define Z_DECIMAL64_NUMBER_FORMAT       Z_NUMBER_FORMAT_IEEE_754_DECIMAL64
#	define Z_DECIMAL64_BITS		       64
#	define Z_DECIMAL64_DIGITS_10	       Z_IEEE_754_DECIMAL64_DIGITS_10
#	define Z_DECIMAL64_MAXIMUM_DIGITS_10   Z_IEEE_754_DECIMAL64_MAXIMUM_DIGITS_10
#	define Z_DECIMAL64_RADIX	       Z_IEEE_754_DECIMAL64_RADIX
#	define Z_DECIMAL64_SIGNIFICAND_DIGITS  Z_IEEE_754_DECIMAL64_SIGNIFICAND_DIGITS
#	define Z_DECIMAL64_EXPONENT_MAXIMUM    Z_IEEE_754_DECIMAL64_EXPONENT_MAXIMUM
#	define Z_DECIMAL64_EXPONENT_MINIMUM    Z_IEEE_754_DECIMAL64_EXPONENT_MINIMUM
#	define Z_DECIMAL64_EXPONENT_10_MAXIMUM Z_IEEE_754_DECIMAL64_EXPONENT_10_MAXIMUM
#	define Z_DECIMAL64_EXPONENT_10_MINIMUM Z_IEEE_754_DECIMAL64_EXPONENT_10_MINIMUM
#	define Z_DECIMAL64_EPSILON	       Z_DECIMAL64(Z_IEEE_754_DECIMAL64_EPSILON)
#	define Z_DECIMAL64_MAXIMUM	       Z_DECIMAL64(Z_IEEE_754_DECIMAL64_MAXIMUM)
#	define Z_DECIMAL64_MINIMUM	       Z_DECIMAL64(Z_IEEE_754_DECIMAL64_MINIMUM)
#	define Z_DECIMAL64_DENORMAL_MINIMUM    Z_DECIMAL64(Z_IEEE_754_DECIMAL64_DENORMAL_MINIMUM)

#endif

#if Z_DIALECT_HAS_TYPE(C, DECIMAL128)

	typedef _Decimal128			zdecimal128;
#	define Z_DECIMAL128			Z_SUFFIX_DL
#	define Z_DECIMAL128_FUNDAMENTAL		Z_FUNDAMENTAL_DECIMAL128
#	define Z_DECIMAL128_FIXED_FUNDAMENTAL	Z_FUNDAMENTAL_DFP128
#	define Z_DECIMAL128_NUMBER_FORMAT	Z_NUMBER_FORMAT_IEEE_754_DECIMAL128
#	define Z_DECIMAL128_BITS		128
#	define Z_DECIMAL128_DIGITS_10		Z_IEEE_754_DECIMAL128_DIGITS_10
#	define Z_DECIMAL128_MAXIMUM_DIGITS_10	Z_IEEE_754_DECIMAL128_MAXIMUM_DIGITS_10
#	define Z_DECIMAL128_RADIX		Z_IEEE_754_DECIMAL128_RADIX
#	define Z_DECIMAL128_SIGNIFICAND_DIGITS	Z_IEEE_754_DECIMAL128_SIGNIFICAND_DIGITS
#	define Z_DECIMAL128_EXPONENT_MAXIMUM	Z_IEEE_754_DECIMAL128_EXPONENT_MAXIMUM
#	define Z_DECIMAL128_EXPONENT_MINIMUM	Z_IEEE_754_DECIMAL128_EXPONENT_MINIMUM
#	define Z_DECIMAL128_EXPONENT_10_MAXIMUM Z_IEEE_754_DECIMAL128_EXPONENT_10_MAXIMUM
#	define Z_DECIMAL128_EXPONENT_10_MINIMUM Z_IEEE_754_DECIMAL128_EXPONENT_10_MINIMUM
#	define Z_DECIMAL128_EPSILON		Z_DECIMAL128(Z_IEEE_754_DECIMAL128_EPSILON)
#	define Z_DECIMAL128_MAXIMUM		Z_DECIMAL128(Z_IEEE_754_DECIMAL128_MAXIMUM)
#	define Z_DECIMAL128_MINIMUM		Z_DECIMAL128(Z_IEEE_754_DECIMAL128_MINIMUM)
#	define Z_DECIMAL128_DENORMAL_MINIMUM	Z_DECIMAL128(Z_IEEE_754_DECIMAL128_DENORMAL_MINIMUM)

#endif

#if Z_DIALECT_HAS_TYPE(C, DECIMAL64X)

	typedef _Decimal64x			zdecimal64x;
#	define Z_DECIMAL64X			Z_SUFFIX_D64x
#	define Z_DECIMAL64X_FUNDAMENTAL		Z_FUNDAMENTAL_DECIMAL
#	define Z_DECIMAL64X_FIXED_FUNDAMENTAL	Z_FLOATING_POINT_FIXED_FUNDAMENTAL(DECIMAL64X)
#	define Z_DECIMAL64X_NUMBER_FORMAT	Z_TYPE_NUMBER_FORMAT		  (DECIMAL64X)
#	define Z_DECIMAL64X_BITS		Z_TYPE_BITS			  (DECIMAL64X)
#	define Z_DECIMAL64X_DIGITS_10		Z_REAL_TYPE_DIGITS_10		  (DECIMAL64X)
#	define Z_DECIMAL64X_MAXIMUM_DIGITS_10	Z_REAL_TYPE_MAXIMUM_DIGITS_10	  (DECIMAL64X)
#	define Z_DECIMAL64X_RADIX		Z_REAL_TYPE_RADIX		  (DECIMAL64X)
#	define Z_DECIMAL64X_SIGNIFICAND_DIGITS	Z_REAL_TYPE_SIGNIFICAND_DIGITS	  (DECIMAL64X)
#	define Z_DECIMAL64X_EXPONENT_MAXIMUM	Z_REAL_TYPE_EXPONENT_MAXIMUM	  (DECIMAL64X)
#	define Z_DECIMAL64X_EXPONENT_MINIMUM	Z_REAL_TYPE_EXPONENT_MINIMUM	  (DECIMAL64X)
#	define Z_DECIMAL64X_EXPONENT_10_MAXIMUM Z_REAL_TYPE_EXPONENT_10_MAXIMUM	  (DECIMAL64X)
#	define Z_DECIMAL64X_EXPONENT_10_MINIMUM Z_REAL_TYPE_EXPONENT_10_MINIMUM	  (DECIMAL64X)
#	define Z_DECIMAL64X_EPSILON		Z_REAL_TYPE_EPSILON		  (DECIMAL64X)
#	define Z_DECIMAL64X_MAXIMUM		Z_REAL_TYPE_MAXIMUM		  (DECIMAL64X)
#	define Z_DECIMAL64X_MINIMUM		Z_REAL_TYPE_MINIMUM		  (DECIMAL64X)
#	define Z_DECIMAL64X_DENORMAL_MINIMUM	Z_REAL_TYPE_DENORMAL_MINIMUM	  (DECIMAL64X)

#endif

#if Z_DIALECT_HAS_TYPE(C, DECIMAL128X)

	typedef _Decimal128x			 zdecimal128x;
#	define Z_DECIMAL128X			 Z_SUFFIX_D128x
#	define Z_DECIMAL128X_FUNDAMENTAL	 Z_FUNDAMENTAL_DECIMAL
#	define Z_DECIMAL128X_FIXED_FUNDAMENTAL	 Z_FLOATING_POINT_FIXED_FUNDAMENTAL(DECIMAL128X)
#	define Z_DECIMAL128X_NUMBER_FORMAT	 Z_TYPE_NUMBER_FORMAT		   (DECIMAL128X)
#	define Z_DECIMAL128X_BITS		 Z_TYPE_BITS			   (DECIMAL128X)
#	define Z_DECIMAL128X_DIGITS_10		 Z_REAL_TYPE_DIGITS_10		   (DECIMAL128X)
#	define Z_DECIMAL128X_MAXIMUM_DIGITS_10	 Z_REAL_TYPE_MAXIMUM_DIGITS_10	   (DECIMAL128X)
#	define Z_DECIMAL128X_RADIX		 Z_REAL_TYPE_RADIX		   (DECIMAL128X)
#	define Z_DECIMAL128X_SIGNIFICAND_DIGITS	 Z_REAL_TYPE_SIGNIFICAND_DIGITS	   (DECIMAL128X)
#	define Z_DECIMAL128X_EXPONENT_MAXIMUM	 Z_REAL_TYPE_EXPONENT_MAXIMUM	   (DECIMAL128X)
#	define Z_DECIMAL128X_EXPONENT_MINIMUM	 Z_REAL_TYPE_EXPONENT_MINIMUM	   (DECIMAL128X)
#	define Z_DECIMAL128X_EXPONENT_10_MAXIMUM Z_REAL_TYPE_EXPONENT_10_MAXIMUM   (DECIMAL128X)
#	define Z_DECIMAL128X_EXPONENT_10_MINIMUM Z_REAL_TYPE_EXPONENT_10_MINIMUM   (DECIMAL128X)
#	define Z_DECIMAL128X_EPSILON		 Z_REAL_TYPE_EPSILON		   (DECIMAL128X)
#	define Z_DECIMAL128X_MAXIMUM		 Z_REAL_TYPE_MAXIMUM		   (DECIMAL128X)
#	define Z_DECIMAL128X_MINIMUM		 Z_REAL_TYPE_MINIMUM		   (DECIMAL128X)
#	define Z_DECIMAL128X_DENORMAL_MINIMUM	 Z_REAL_TYPE_DENORMAL_MINIMUM	   (DECIMAL128X)

#endif

/* MARK: - Default real type */

#ifdef Z_REAL_FUNDAMENTAL
	typedef Z_REAL_TYPE(REAL) zreal;

#elif defined(Z_DOUBLE)
	typedef zdouble		  zreal;
#	define Z_REAL_FUNDAMENTAL Z_DOUBLE_FUNDAMENTAL
#endif

#ifdef Z_REAL_FUNDAMENTAL

#	define Z_REAL			  Z_REAL_TYPE_LITERAL		 (REAL)
#	define Z_REAL_FIXED_FUNDAMENTAL	  Z_REAL_TYPE_FIXED_FUNDAMENTAL	 (REAL)
#	define Z_REAL_NUMBER_FORMAT	  Z_TYPE_NUMBER_FORMAT		 (REAL)
#	define Z_REAL_BITS		  Z_TYPE_BITS			 (REAL)
#	define Z_REAL_DIGITS_10		  Z_REAL_TYPE_DIGITS_10		 (REAL)
#	define Z_REAL_MAXIMUM_DIGITS_10	  Z_REAL_TYPE_MAXIMUM_DIGITS_10	 (REAL)
#	define Z_REAL_RADIX		  Z_REAL_TYPE_RADIX		 (REAL)
#	define Z_REAL_SIGNIFICAND_DIGITS  Z_REAL_TYPE_SIGNIFICAND_DIGITS (REAL)
#	define Z_REAL_EXPONENT_MAXIMUM	  Z_REAL_TYPE_EXPONENT_MAXIMUM	 (REAL)
#	define Z_REAL_EXPONENT_MINIMUM	  Z_REAL_TYPE_EXPONENT_MINIMUM	 (REAL)
#	define Z_REAL_EXPONENT_10_MAXIMUM Z_REAL_TYPE_EXPONENT_10_MAXIMUM(REAL)
#	define Z_REAL_EXPONENT_10_MINIMUM Z_REAL_TYPE_EXPONENT_10_MINIMUM(REAL)
#	define Z_REAL_EPSILON		  Z_REAL_TYPE_EPSILON		 (REAL)
#	define Z_REAL_MAXIMUM		  Z_REAL_TYPE_MAXIMUM		 (REAL)
#	define Z_REAL_MINIMUM		  Z_REAL_TYPE_MINIMUM		 (REAL)
#	define Z_REAL_DENORMAL_MINIMUM	  Z_REAL_TYPE_DENORMAL_MINIMUM	 (REAL)

#endif

#endif /* Z_types_real_H */
