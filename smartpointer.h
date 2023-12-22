
template <typename T>
class Auto_ptr1
{
	T* m_ptr;

public:
	Auto_ptr1(T* ptr = nullptr) : m_ptr{ ptr }
	{

	}

	~Auto_ptr1()
	{
		delete m_ptr;
	}

	T& operator*() const { return *m_ptr; }
	T* operator->() const { return m_ptr; }

};