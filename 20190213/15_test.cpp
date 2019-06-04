#include <iostream>
#include <string.h>
using namespace std;

void change(const int (&a)[3][2], int (&b)[2][3])
{
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<2; j++)
		{
			b[j][i] = a[i][j];
		}
	}
}

int main(int argc, char *argv[])
{	
	int aa[3][2] = {{11, 22}, {33, 44}, {55, 66}};
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<2; j++)
		{
			cout << aa[i][j] << ' ';
		}
		cout << endl;
	}

	cout << "----------------------------\n";

	int bb[2][3];
	change(aa, bb);
	
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<3; j++)
		{
			cout << bb[i][j] << ' ';
		}
		cout << endl;
	}


	return 0;
}
