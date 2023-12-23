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

	DynamicArray(const DynamicArray& array) = delete;
	DynamicArray& operator=(const DynamicArray& arr) = delete;

	DynamicArray(DynamicArray&& array) noexcept :
		m_array(array.m_array), m_length(array.m_length)
	{
		array.m_length = 0;
		array.m_array = nullptr;
	}

	DynamicArray& operator=(DynamicArray&& array) noexcept
	{
		if (this == &array)
		{
			return *this;
		}

		delete[] m_array;
		m_length = array.m_length;
		m_array = array.m_array;
		array.m_length = 0;
		array.m_array = nullptr;

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
