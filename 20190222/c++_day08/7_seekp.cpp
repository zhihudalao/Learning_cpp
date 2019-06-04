#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
    ofstream ofile("test.txt");
    ofile.seekp(5, ios_base::beg);
    cout << ofile.tellp() << endl;

    ofile << "AAA";
    cout << ofile.tellp() << endl;

    return 0;
}

