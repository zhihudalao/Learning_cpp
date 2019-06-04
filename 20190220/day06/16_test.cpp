#include <iostream>
using namespace std;

template<typename U>
class Compare
{
public:
	bool less(U a, U b);
};

template<typename U>
bool Compare<U>::less(U a, U b)
{
	return a < b;
}

int main(void)
{

	cout << "---------------\n\n";

	return 0;
}
