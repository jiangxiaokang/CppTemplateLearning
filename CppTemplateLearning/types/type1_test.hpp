#include <iostream>
#include "type1.hpp"

template <typename T>
void test(T const& t)
{
    if (IsFundaT<T>::Yes) {
        std::cout << "T is fundamental type" << std::endl;
    }
    else {
        std::cout << "T is no fundamental type" << std::endl;
    }
}

class MyType {
};
