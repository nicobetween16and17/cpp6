#include "whatever.hpp"
#include  <iostream>
int main()
{
	int test,test2;

	test = 0;
	test2 = 9;
	std::cout << "test = " << test << " and test2 = " << test2 << " min = " << min<int>(test, test2) << " max = " << max<int>(test, test2) << std::endl;
	swap<int>(test, test2);
	std::cout << "test = " << test << " and test2 = " << test2 << " min = " << min<int>(test, test2) << " max = " << max<int>(test, test2) << std::endl;


}