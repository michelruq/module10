#include "resource.h"
#include "smartpointer.h"

Auto_ptr1<Resource> generateResource()
{
	Auto_ptr1<Resource> res{new Resource()};
	return res;
}


int main(int argc, char** argv)
{
	Auto_ptr1<Resource> mainres;
	mainres = generateResource();

	return 0;
}