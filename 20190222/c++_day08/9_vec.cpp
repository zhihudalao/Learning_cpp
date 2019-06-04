#include <iostream>
#include <vector>
using namespace std;

void show(const vector<int> &vec)
{
    for (int i=0; i<vec.size(); i++)
    {
//        cout << vec[i] << '\n';
        cout << vec.at(i) << '\n';
    }
    cout << endl;
}

int main()
{
    vector<int> vec;
    vec.push_back(11);
    vec.push_back(22);
    vec.push_back(33);
    vec.push_back(44);

    cout << "Hello World!" << endl;
    return 0;
}

