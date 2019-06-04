#include "input.h"

Input::Input()
{
}

void Input::input()
{
    cout << "please check info type<card, pwd, fingure>:\n";
    cin >> m_strType;
    cout << "please check info:\n";
    cin >> m_strData;
}

void Input::clear()
{
    m_strType.clear();
    m_strData.clear();
}

string Input::data() const
{
    return m_strData;
}

string Input::type() const
{
    return m_strType;
}

void Input::waring() const
{
    cout << "dididididi...\n";
}
