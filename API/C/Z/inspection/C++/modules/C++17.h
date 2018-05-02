/* Z Kit - inspection/C++/modules/C++17.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2018 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_inspection_CPP_modules_CPP17_H__
#define __Z_inspection_CPP_modules_CPP17_H__

/* MARK: - Inherited */

#include <Z/inspection/C++/modules/C++14.h>

#define Z_CPP_HAS_FOLD_EXPRESSION		     TRUE /* N4295 */
#define Z_CPP_HAS_NESTED_NAMESPACE_DEFINITION	     TRUE /* N4230 */

/* MARK: - Literals */

#define Z_CPP_HAS_LITERAL_HEXADECIMAL_FLOATING_POINT TRUE
#define Z_CPP_HAS_LITERAL_UTF8_CHARACTER_LITERAL     TRUE /* N4267 */

#endif /* __Z_inspection_CPP_modules_CPP17_H__ */
