#include <iostream>
#include "basic\max.hpp"
#include "basic\max3.hpp"
int main()
{
	std::cout << ::max(4.1, 5.4) << std::endl;

	//重载
	std::cout << ::max('a', 2.4) << std::endl;
	return 0;
}
