#include <iostream>
using namespace std;

class Complex
{
public:
    //explicit:防止隐式类型转换
    /*explicit */Complex(float r=0):m_r(r), m_v(r)
    {
        cout << "COmplex(float)..." << m_r << endl;
    }
    void info()
    {
        cout << m_r << '+' << m_v << 'i' << endl;
    }

    operator int()
    {
        cout << "operator int()" << endl;
        return m_r;
    }

private:
    float m_r;
    float m_v;
};

void fun(Complex c)
{
    c.info();
}

int main(void)
{
//    fun(89);   //Complex c = 89;//Complex c(89);
//    Complex c(100);
//    int a = 0;
//    a = c;
//    cout << a << endl;

    Complex c(100);
    Complex c2;
//    c2 = c + 100;
    c2 = 100+c;

    return 0;
}

