#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
    ofstream file("test.txt");
    if (file.is_open())
    {
        string name;
        string e("exit");
        while (1)
        {
            cin >> name;
            if (name == e)
            {
                break;
            }
            file << name << endl;
        }
        file.close();

        ifstream ifile("test.txt");
        int count = 0;
        while (true)
        {
            ifile >> name;
            //判断是否到达文件末尾
            if (ifile.eof())
            {
                break;
            }
            cout << name << endl;
            count += 1;
        }
        cout << "total number:" << count << endl;
        ifile.close();
    }


    return 0;
}

