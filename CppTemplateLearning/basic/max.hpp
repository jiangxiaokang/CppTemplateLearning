#pragma once
template <typename T>
inline T const& max(T const& a, T const& b)
{
	return a > b ? a : b;
}