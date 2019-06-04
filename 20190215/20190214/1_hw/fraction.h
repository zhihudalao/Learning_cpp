#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction
{
public:
	Fraction();
    void setFraction();
    void print();
    void redu();
    ~Fraction();

private:
    int m_child;
    int m_mother;
};

#endif // FRACTION_H
