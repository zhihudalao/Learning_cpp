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
		cout << "MyString(有参) ...\n";
	}

	//析构函数：在对象释放的时候自动调用
	~MyString()
	{
		delete []m_pData;
		cout << "~MyString() ...\n";
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

void fun()
{
	MyString str("Hello World");
	str.display();
}

int main(void)
{
	fun();

	while (1)
	{}


	return 0;
}
