#include <iostream>

using namespace std;

class Fraction
{
public:
    Fraction()
    {
        m_child = 0;
        m_mother = 0;
    }
    void setFraction()
    {
       // cout << "请输入分子分母:\n";
        cin >> m_child >> m_mother;
    }
    void print()
    {
        cout << m_child << '/' << m_mother << endl;
    }
    void redu()
    {
        for (int i=m_child; i>0; i--)
        {
            if (0 == m_child%i && 0 == m_mother%i)
            {
                m_child = m_child/i;
                m_mother = m_mother/i;
                break;
            }
            print();
        }
    }

private:
    int m_child;
    int m_mother;
};

int main()
{
    Fraction f;
    f.setFraction();
    f.redu();
    f.print();


    cout << "Hello World!" << endl;
    return 0;
}
