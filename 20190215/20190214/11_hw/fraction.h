#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction
{
public:
	static Fraction& getInstance()
	{
		static Fraction f;
		return f;
	}
private:
	Fraction();

private:
    int m_child;
    int m_mother;
};

#endif // FRACTION_H
