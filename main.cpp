#include "resource.h"
#include "smartpointer.h"

void SomeFunction()
{
	Auto_ptr1<Resource> res(new Resource());
	int x;
	std::cout << "Enter an integer: " << std::endl;
	std::cin >> x;

	if (x == 0)
	{
		return;
	}
	res->sayHi();
}


int main(int argc, char** argv)
{
	SomeFunction();


	return 0;
}