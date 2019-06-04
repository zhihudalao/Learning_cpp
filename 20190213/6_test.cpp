#include <iostream>
using namespace std;

void bubble(string *s, int size)
{
	string tmp = "";
	int i = 0;
	int j = 0;
	for (; i<size-1; i++)
	{
		for (j=0; j<size-1-i; j++)
		{
			if (s[j] < s[j+1])
			{
				tmp = s[j];
				s[j] = s[j+1];
				s[j+1] = tmp;
			}
		}
	}
}

int main(int argc, char *argv[])
{
	string str[5] = {"apple", "opop", "vivo", "mi", "huiwei"};
	bubble(str, 5);

	int i = 0;
	for (; i<5; i++)
	{
		cout << str[i] << endl;
	}

	return 0;
}
