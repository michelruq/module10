#include <iostream>

class Resource
{
public:
	Resource();
	~Resource();
	void sayHi();
};

Resource::Resource()
{
	std::cout << "Resource acquired" << std::endl;
}

Resource::~Resource()
{
	std::cout << "Resource destroyed" << std::endl;
}

void Resource::sayHi()
{
	std::cout << "Hi!" << std::endl;
}