#include <iostream>
using namespace std;

class Saler
{
public:
    Saler()
    {
        m_strName = "saler";
        m_iSaleNum = 0;
    }
    Saler(const char *name)
    {
        m_strName = name;
        m_iSaleNum = 0;
    }

    void sale(int num)
    {
        if (num <= 0)
        {
            cout << "ERROR : sale num <= 0\n";
        }
        else
        {
            if (num > m_iTotalNum)
            {
                cout << "ERROR : sale num >= total\n";
            }
            else
            {
                m_iTotalNum -= num;
                m_iSaleNum += num;
            }
        }
    }

    void info()
    {
        cout << m_strName << " sale " << m_iSaleNum
             << " left " << m_iTotalNum << endl << endl;
    }

    static int m_iTotalNum;

private:
    string m_strName;
    int m_iSaleNum;
};

int Saler::m_iTotalNum = 1000;

int main()
{
    cout << "left --> " << Saler::m_iTotalNum << endl;

    Saler s1("jack");
    Saler s2("rose");
    Saler s3("tony");
    Saler s4("kitty");

    s1.sale(300);
    s1.info();

    s2.sale(-90);
    s2.info();

    s3.sale(400);
    s3.info();

    s4.sale(700);
    s4.info();

    cout << "left --> " << Saler::m_iTotalNum << endl;



    cout << "Hello World!" << endl;
    return 0;
}
