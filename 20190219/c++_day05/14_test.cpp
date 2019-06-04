#include <iostream>
using namespace std;

template<typename U>
void bubble(U *arr, int num)
{
	U tmp;
	for (int i=0; i<num-1; i++)
	{
		for (int j=0; j<num-i-1; j++)
		{
			if (arr[j]<arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}			
		}
	}
}

template<typename U>
void print(U* arr, int num)
{
	for (int i=0; i<num; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

int main(void)
{
	int arr[5] = {21, 56, 34, 11, 31};
	print<int>(arr, 5);
	cout << "-----------------\n";
	bubble<int>(arr, 5);
	print<int>(arr, 5);

	return 0;
}
