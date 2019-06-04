#include "fraction.h"

Fraction::Fraction()
{
    m_child = 0;
    m_mother = 0;
}

void Fraction::setFraction()
{
   // cout << "请输入分子分母:\n";
    cin >> m_child >> m_mother;
}
void Fraction::print()
{
    cout << m_child << '/' << m_mother << endl;
}
void Fraction::redu()
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

Fraction::~Fraction()
{

}
