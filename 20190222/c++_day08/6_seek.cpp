#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
    ifstream ifile("test.txt");
    ifile.seekg(5, ios_base::beg);
	//获得读写位置
	cout << ifile.tellg() << endl;
  
  	char caBuf[32] = {'\0'};
    ifile.read(caBuf, 15);
	cout << ifile.tellg() << endl;
    cout << caBuf << endl;

    ifile.seekg(-6, ios_base::cur);
	cout << ifile.tellg() << endl;
    ifile.read(caBuf, 15);
    cout << caBuf << endl;

    ifile.seekg(-20, ios_base::end);
    ifile.read(caBuf, 15);
    cout << caBuf << endl;

    ifile.close();

    return 0;
}

