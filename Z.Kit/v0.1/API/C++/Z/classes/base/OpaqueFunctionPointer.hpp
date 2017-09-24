/* Z Kit C++ API - classes/base/OpaqueFunctionPointer.hpp
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2017 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_classes_base_OpaqueFunctionPointer_HPP__
#define __Z_classes_base_OpaqueFunctionPointer_HPP__

#include <Z/traits/Type.hpp>
#include <Z/traits/filtering.hpp>


namespace Zeta {struct OpaqueFunctionPointer {
	void (* pointer)();

	template <class T, class = typename EnableIf<Type<T>::is_function_pointer>::type>
	Z_INLINE_MEMBER OpaqueFunctionPointer(T pointer)
	: pointer((void (*)())pointer) {}

	template <class T> Z_INLINE_MEMBER operator T() const {return (T)pointer;}
};}


#endif // __Z_classes_base_OpaqueFunctionPointer_HPP__
