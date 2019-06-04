#include <iostream>
using namespace std;
#if 0
void print(int a)  //void _z5printi(int a)
{
	cout <<  a << endl;
}

void print(float f) //void _z5printf(float f)
{
	cout << f << endl;
}

void print(char c)
{
	cout << c << endl;
}

void print(int *arr, int num)
{
	for (int i=0; i<num; i++)
	{
		cout << arr[i] << ' ';
	}	
	cout << endl;
}

void print(float *arr, int num)
{
	for (int i=0; i<num; i++)
	{
		cout << arr[i] << ' ';
	}	
	cout << endl;
}
#endif

template<typename U>
void print(const U &data)
{
	cout << data << endl;
}

//void print(const int &data){cout << data << endl;}
//void print(const float &data){cout << data << endl;}
//void print(const string &data){cout << data << endl;}

template<typename U, typename M>
void print(U a, M b)
{
	cout << a << ' ' << b << endl;
}

int main(void)
{
	int a = 90;
//	print(a);
#if 0
	print<int>(a);  
	float f = 3.14f;
	print<float>(f);
	string str = "34567890ghaxsmxa;sxascxkajbsciqgwuasbkxjcbqsixuqisx";
	print<string>(str);
	
	print<int, float>(a, f);
	print<int, string>(a, str);
	print<string, float>(str, f);
#endif
	return 0;
}
