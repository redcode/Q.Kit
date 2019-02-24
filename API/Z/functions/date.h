/* Z Kit - functions/date.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2019 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_functions_date_H
#define Z_functions_date_H

#include <Z/types/fundamental.h>
#include <Z/macros/date.h>


static Z_INLINE
boolean z_gregorian_year_is_leap(zullong year)
	{return Z_GREGORIAN_YEAR_IS_LEAP(year);}


static Z_INLINE
zuint8 z_gregorian_year_days_in_month(zullong year, zuint8 month)
	{
	return month == 2
		? (Z_GREGORIAN_YEAR_IS_LEAP(year) ? 29 : 28)
		: (month == 4 || month == 6 || month == 9 || month == 11 ? 30 : 31);
	}


#endif /* Z_functions_date_H */
