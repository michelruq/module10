#include "resource.h"
#include "smartpointer.h"
#include "dinamicarray.h"
#include "timer.h"

DynamicArray<int> cloneArrayAndDouble(const DynamicArray<int>& arr)
{
	DynamicArray<int> dbl(arr.getLength());
	for (int i = 0; i < arr.getLength(); ++i)
	{
		dbl[i] = arr[i]*2;
	}
	return dbl;
}


int main(int argc, char** argv)
{
	Timer t;
	DynamicArray<int> arr(1000000);
	for (int i = 0; i < arr.getLength(); ++i)
	{
		arr[i] = i;
	}

	arr = cloneArrayAndDouble(arr);
	std::cout << t.elapsed();

	return 0;
}