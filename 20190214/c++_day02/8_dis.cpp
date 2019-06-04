#include <iostream>
#include <string>
#include <string.h>
using namespace std;

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

	//析构函数：在对象释放的时候自动调用
	~MyString()
	{
		cout << "~MyString() " << m_pData << endl;
		delete []m_pData;
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
	//构造，析构顺序相反
	MyString s1("aaa");
	MyString s2("bbb");
	MyString s3("ccc");

	return 0;
}
