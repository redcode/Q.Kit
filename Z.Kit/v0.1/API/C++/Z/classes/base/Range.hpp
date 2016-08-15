/* Z Kit C++ API - classes/base/Range.hpp
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2016 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_classes_base_Range_HPP__
#define __Z_classes_base_Range_HPP__

#include <Z/macros/type selection.hpp>
#include <Z/macros/super.hpp>
#include <Z/functions/base/value.hpp>

#if Z_MUST_SUPPORT(NS_RANGE) && defined(Z_OBJECTIVE_C)
#	import <Foundation/NSRange.h>
#endif

namespace Zeta {template <typename T> struct Range;}


template <typename T> struct Zeta::Range : public ZNaturalType(ZRange, T) {

	typedef typename ZNaturalType(ZRange, T) Base;
	typedef typename ZNaturalType(ZRange, T) Super;
	typedef		 T			 Value;

	Z_INLINE_MEMBER Range<T>()		    {}
	Z_INLINE_MEMBER Range<T>(T size)	    {this->index = 0; this->size = size;}
	Z_INLINE_MEMBER Range<T>(T index, T size)   {this->index = index; this->size = size;}
	Z_INLINE_MEMBER Range<T>(void *data)	    {*this = *(Range<T> *)data;}
	Z_INLINE_MEMBER Range<T>(const Base &range) {*z_base = range;}

	Z_INLINE_MEMBER operator Boolean() const {return this->index || this->size;}
	Z_INLINE_MEMBER operator Base	() const {return *z_base;}


	Z_INLINE_MEMBER Boolean operator ==(const Range<T> &range) const
		{return this->index == range.index && this->size == range.size;}


	Z_INLINE_MEMBER Boolean operator !=(const Range<T> &range) const
		{return this->index != range.index || this->size != range.size;}


	Z_INLINE_MEMBER Boolean operator ==(T number) const
		{return this->index == number && this->size == number;}


	Z_INLINE_MEMBER Boolean operator !=(T number) const
		{return this->index != number || this->size != number;}


	Z_INLINE_MEMBER Range<T> operator &(const Range<T> &range) const
		{
		T index = (this->index > range.index) ? this->index : range.index;
		T end	= Zeta::minimum<T>(this->index + this->size, range.index + range.size);

		return end > index ? Range(index, end - index) : Range<T>(0, 0);
		}


	Z_INLINE_MEMBER Range<T> operator |(const Range<T> &range) const
		{
		T	index = (this->index < range.index) ? this->index : range.index,
			a_end = this->index + this->size,
			b_end = range.index + range.size;

		return Range<T>(index, ((a_end > b_end) ? a_end : b_end) - index);
		}


	Z_INLINE_MEMBER Range<T> &operator &=(const Range<T> &range) {return *this = *this & range;}
	Z_INLINE_MEMBER Range<T> &operator |=(const Range<T> &range) {return *this = *this | range;}


#	if Z_MUST_SUPPORT(NS_RANGE) && defined(Z_OBJECTIVE_C)

		Z_INLINE_MEMBER Range<T>(const NSRange &range)
			{this->index = range.location; this->size = range.length;}


		Z_INLINE_MEMBER operator NSRange() const
			{
			NSRange result = {NSUInteger(this->index), NSUInteger(this->size)};
			return result;
			}

#	endif


	Z_INLINE_MEMBER Boolean contains(const Range<T> &range) const
		{
		return	range.index >= this->index &&
			range.index + range.size <= this->index + this->size;
		}


	Z_INLINE_MEMBER Boolean contains(T index) const
		{return this->index >= this->index && this->index < this->index + this->size;}


	Z_INLINE_MEMBER Boolean collides(const Range<T> &range) const
		{
		return	this->index < range.index + range.size &&
			range.index < this->index + this->size;
		}


	Z_INLINE_MEMBER Boolean is_zero() const
		{return !this->index && !this->size;}


	Z_INLINE_MEMBER T end() const
		{return this->index + this->size;}

};


#endif // __Z_classes_base_Range_HPP__
