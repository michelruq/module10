#include <iostream>

class Fraction
{
private:
	int m_numerator = 0;
	int m_denominator = 0;

public:
	Fraction(int numerator = 0, int denominator = 1) :
		m_numerator{ numerator }, m_denominator{ denominator }
	{

	}

	friend std::ostream& operator << (std::ostream& out, const Fraction& f1)
	{
		out << f1.m_numerator << '/' << f1.m_denominator;
		return out;
	}
};