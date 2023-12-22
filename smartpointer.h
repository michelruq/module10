
template <typename T>
class Auto_ptr1
{
	T* m_ptr;

public:
	Auto_ptr1(T* ptr = nullptr) : m_ptr{ ptr }
	{

	}

	Auto_ptr1(Auto_ptr1& a)
	{
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;
	}

	Auto_ptr1& operator=(Auto_ptr1& a)
	{
		if (&a == this)
		{
			return *this;
		}

		delete m_ptr;
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;
		return *this;
	}

	~Auto_ptr1()
	{
		delete m_ptr;
	}

	T& operator*() const { return *m_ptr; }
	T* operator->() const { return m_ptr; }

	bool isNull() const { return m_ptr == nullptr; }

};