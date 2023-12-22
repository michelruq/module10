#include "resource.h"
#include "smartpointer.h"


int main(int argc, char** argv)
{
	Auto_ptr1<Resource> res1(new Resource());
	Auto_ptr1<Resource> res2;

	std::cout << "res1 is " << (res1.isNull() ? "Null" : "Not Null") << std::endl;
	std::cout << "res2 is " << (res2.isNull() ? "Null" : "Not Null") << std::endl;

	res2 = res1;

	std::cout << "Ownership transferred" << std::endl;

	std::cout << "res1 is " << (res1.isNull() ? "Null" : "Not Null") << std::endl;
	std::cout << "res2 is " << (res2.isNull() ? "Null" : "Not Null") << std::endl;

	return 0;
}