#ifndef TYPET_HPP
#define TYPET_HPP

#include "type1.hpp"//IsFundaT
#include "type_func1.hpp"//IsFunctionT CompoundT
#include "type2.hpp"//referance &&  pointer 
#include "type_array.hpp"//arrays 
#include "type_ptr_mem.hpp"//ptr member
#include "type_class.hpp"//IsClassT
#include "type_enum.hpp"//IsEnumT


template <typename T>
class TypeT
{
public:
	enum {
        IsFundaT = IsFundaT<T>::Yes,
        IsPtrT = CompoundT<T>::IsPtrT,
        IsRefT = CompoundT<T>::IsRefT,
        IsArrayT = CompoundT<T>::IsArrayT,
        IsFuncT = CompoundT<T>::IsFuncT,
        IsPtrMemT = CompoundT<T>::IsPtrMemT,
        IsEnumT = IsEnumT<T>::Yes,
        IsClassT = IsClassT<T>::Yes
	};
};

#endif //TYPET_HPP
