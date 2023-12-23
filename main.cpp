#include "resource.h"
#include "smartpointer.h"
#include "dinamicarray.h"
#include "timer.h"

template<class T>
void mySwapCopy(T& a, T& b)
{
	T tmp{std::move(a)};
	a = std::move(b);
	b = std::move(tmp);
}

int main(int argc, char** argv)
{
	std::string x{"abc"};
	std::string y{"de"};

	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;

	mySwapCopy(x, y);

	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;

	return 0;
}