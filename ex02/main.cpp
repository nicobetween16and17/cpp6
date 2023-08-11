#include "Array.hpp"

int main()
{
	Array<int>t;
	Array<int>t2(10);

	t2[3] = 5;
	try{
		t2[10] = 7;
	}
	catch (std::exception &e)
	{
		std::cout << "out of bound\n";
	}
	std::cout << t2[3] << std::endl;
	t = t2;
	std::cout << t[3] << std::endl;

}