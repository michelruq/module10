#include "resource.h"
#include "smartpointer.h"


int main(int argc, char** argv)
{
	Resource* res = new Resource();
	delete res;
	return 0;
}