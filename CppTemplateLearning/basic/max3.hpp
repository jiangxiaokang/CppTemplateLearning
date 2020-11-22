#pragma once
#include "cstring"

template <typename T>
inline T* const& max(T* const& a, T* const& b)
{
	return a > b ? a : b;
 }
//const char* const  �� char const* const ��ͬ
inline const char* const& max(const char* const& a, const char* const& b)
{
	return a > b ? a : b;
}

