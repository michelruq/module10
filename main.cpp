#include "resource.h"
#include "smartpointer.h"


int main(int argc, char** argv)
{
	Auto_ptr1<Resource> res(new Resource());

	return 0;
}