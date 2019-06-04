#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int m = 0;
	int n = 0;
	cout << "请输入行列值:\n";
	cin >> m >> n;

	cout << "请输入" << m << "行," << n << "列矩阵数据\n";
	int data[m][n];
	int i = 0;
	int j = 0;
	for (; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			cin >> data[i][j];
		}
	}

	cout << "-----------------\n";
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			cout << data[i][j] << ' ';
		}
		cout << endl;
	}


	return 0;
}
