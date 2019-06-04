#include <iostream>
using namespace std;

template<typename T>
int find(T list[], int n, T key)
{
	int i = 0;
	for (i=0; i<n; i++)
	{
		if (list[i] == key)
		{
			break;
		}
	}
	if (n == i)
	{
		return -1;
	}
	return i;
}

int main(void)
{	
	int a[5]={1,2,3,4,5}; 
	double b[5]={1.1,2.2,3.3,4.4,5.5}; 
	char c[]={'a','b','c','d','e','f'}; 

	cout << find<int>(a, 5, 19) << endl;
	cout << find<double>(b, 5, 4.4) << endl;
	cout << find<char>(c, sizeof(c), 'a') << endl;
	
	
	return 0;
}
