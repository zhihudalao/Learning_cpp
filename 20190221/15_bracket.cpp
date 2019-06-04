#include <iostream>
using namespace std;

template<typename U>
class MyLess
{
public:
	bool operator()(U a, U b)
	{
		return a<b;
	}	
};

template<typename U>
class MyGreater
{
public:
	bool operator()(U a, U b)
	{
		return a>b;
	}	
};

template<typename U, typename M = MyLess<U> >
class Sort
{
public:
	static void bubble(U *arr, int num)
	{
		M com;
		U tmp;
		for (int i=0; i<num-1; i++)
		{
			for (int j=0; j<num-1-i; j++)
			{
	//		if (arr[j] < arr[j+1])
				if (com(arr[j], arr[j+1]))
				{
					tmp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = tmp;
				}
			}
		}
	}
};

template<typename U>
void display(U *arr, int num)
{
	for (int i=0; i<num; i++)
	{
		cout << arr[i] << endl;
	}
}


int main(void)
{
	int a[3] = {12, 67, 6};
//	Sort<int>::bubble(a, 3);
	Sort<int, MyGreater<int> >::bubble(a, 3);
	display<int>(a, 3);

	return 0;
}




