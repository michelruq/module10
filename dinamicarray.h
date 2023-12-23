#include <algorithm> //for std::copy_n
#include <iostream>

template<typename T>
class DynamicArray
{
private:
	T* m_array{};
	int m_length{};

public:
	DynamicArray(int length) : m_array {new T[length]}, m_length{length}
	{

	}

	~DynamicArray()
	{
		delete[] m_array;
	}

	DynamicArray(const DynamicArray& array) : m_length{ array.m_length}
	{
		m_array = new T[m_length];
		std::copy_n(array.m_array, m_length, m_array);
	}

	DynamicArray& operator=(const DynamicArray& arr)
	{
		if (&arr == this)
		{
			return *this;
		}

		delete[] m_array;

		m_length = arr.m_length;
		m_array = new T[m_length];
		std::copy_n(arr.m_array, m_length, m_array);

		return *this;

	}

	int getLength() const;
	T& operator[](int index);
	const T& operator[] (int index) const;
};

template<typename T>
int DynamicArray<T>::getLength() const
{
	return m_length;
}

template<typename T>
T& DynamicArray<T>::operator[](int index)
{
	return m_array[index];
}

template<typename T>
const T& DynamicArray<T>::operator[] (int index) const
{
	return m_array[index];
}
