#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
//	int a = 90;
//	int a(180);
	string str = "hello world";
	string str2("hihihi --> ^_^");
	string str3 = str;
	string str4(str2);

	cout << str << ' ' << str2 << ' ' << str3 << ' ' << str4 << endl;


	str3 = "######";
	cout << "str3=" << str3 << endl;
//	char buf[32] = {'\0'};
//	buf = "opop";

//	if (str < <= > >= == != str2)		



	return 0;
}
