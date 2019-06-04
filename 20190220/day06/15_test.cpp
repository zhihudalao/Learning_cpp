#include <iostream>
using namespace std;

template<typename U = int>
class Compare
{
public:
	bool less(U a, U b)
	{
		return a < b;
	}
};

int main(void)
{
	Compare<> c;

	cout << "---------------\n\n";

	return 0;
}
