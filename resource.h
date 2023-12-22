#include <iostream>

class Resource
{
public:
	Resource();
	~Resource();
};

Resource::Resource()
{
	std::cout << "Resource acquired" << std::endl;
}

Resource::~Resource()
{
	std::cout << "Resource destroyed" << std::endl;
}