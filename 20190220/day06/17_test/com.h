#ifndef COM_H
#define COM_H

#include <iostream>
using namespace std;

template<typename U>
class Compare
{
public:
	Compare();
	bool less(U a, U b);
};

template<typename T>
Compare<T>::Compare()
{}

template<typename U>
bool Compare<U>::less(U a, U b)
{
	return a < b;
}


#endif
