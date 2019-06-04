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

    //静态成员函数没有隐藏的this指针
    //所以不能直接访问非静态成员变量
    //能直接访问静态成员变量

    //静态成员函数没有隐藏的this指针
    //所以不能直接调用非静态成员函数
    //能直接调用静态成员函数

    //静态成员函数既可以通过对象调用
    //也可以直接通过类名调用
    static void test()
    {
//        cout << m_strName << endl; //error
        Saler s;
        cout << s.m_strName << endl;
        cout << m_iTotalNum << endl;

//        sale(120);error
    }

    //void sale(Saler *this, int num)
    void sale(int num)
    {
        if (num <= 0)
        {
            cout << "ERROR : sale num <= 0\n";
        }
        else
        {
            if (num > this->m_iTotalNum)
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

    //void info(Saler *this)
    void info()
    {
        this->sale(890);
        cout << this->m_strName << " sale " << m_iSaleNum
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
    Saler::test();
    cout << "left --> " << Saler::m_iTotalNum << endl;

    Saler s1("jack");
    Saler s2("rose");
    Saler s3("tony");
    Saler s4("kitty");

    s1.sale(300);   //sale(&s1, 300);
    s1.info();

    s2.sale(-90);
    s2.info();   //info(&s2);

    s3.sale(400);
    s3.info();

    s4.sale(700);
    s4.info();

    cout << "left --> " << Saler::m_iTotalNum << endl;



    cout << "Hello World!" << endl;
    return 0;
}
