#include <iostream>
#include <string>
#include <string.h>
using namespace std;
/*
struct Test
{
	char *p;
};

Test t;
t.p = new char[1024];

sizeof(t);
*/



class MyString
{
public:
	MyString()
	{
		m_pData = new char[1];
		m_pData[0] = '\0';
		cout << "MyString() ...\n";
	}
	// myString s("hello");
	MyString(const char *pData)
	{
		if (NULL == pData)
		{
			m_pData = new char[1];
			m_pData[0] = '\0';
		}
		else
		{
			int iLen = strlen(pData)+1;
			m_pData = new char[iLen];
			strcpy(m_pData, pData);
		}

		cout << "MyString(有参) " << m_pData << endl;
	}

	//若没有自定义拷贝构造函数，则会自动生成一个默认的拷贝构造函数
	//实现的是浅拷贝

	//拷贝构造函数:浅拷贝，深拷贝
	MyString(const MyString &other)
	{
		int iLen = strlen(other.m_pData);
		if (0 == iLen)
		{
			m_pData = new char[1];
			m_pData[0] = '\0';
		}
		else
		{
			m_pData = new char[iLen+1];
			strcpy(m_pData, other.m_pData);
		}
		cout << "拷贝构造函数...\n";
	}

	//析构函数：在对象释放的时候自动调用
	~MyString()
	{
		cout << "~MyString() " << m_pData << endl;
		delete []m_pData;
		m_pData = NULL;
	}

	const char *data()
	{
		return m_pData;
	}

	void display()
	{
		cout << m_pData << endl;
	}

	int length()
	{
		return strlen(m_pData);
	}

private:
	char *m_pData;
};

int main(void)
{
	MyString s1("aaa");
	MyString s2(s1);  //MyString s2 = s1;

	return 0;
}
