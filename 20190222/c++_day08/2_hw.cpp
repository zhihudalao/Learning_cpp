#include <iostream>
#include <string.h>

using namespace std;

class MyString
{
public:
	MyString(const char *str = NULL)
	{
		if (NULL == str)
		{
			m_data = new char[1];
			m_data[0] = '\0';
		}
		else
		{
			int iLen = strlen(str)+1;
			m_data = new char[iLen];
			strcpy(m_data, str);
		}
	}
	MyString(const MyString& rhs)
	{
		int iLen = strlen(rhs.m_data)+1;
		m_data = new char[iLen];
		strcpy(m_data, rhs.m_data);
	}
	~MyString()
	{
		delete []m_data;
		m_data = NULL;	
		cout << "~MyString()...\n";
	}

	MyString &operator+=(const MyString &other)
	{
		int iLen = strlen(m_data)+strlen(other.m_data)+1;
		char *pData = new char[iLen];
		strcpy(pData, m_data);
		strcat(pData, other.m_data);

		delete []m_data;
		m_data = pData;

		cout << "operator+=...\n";

		return *this;
	}
	const char *data() const
	{
		return m_data;
	}
private:
	char *m_data;
};

int main(void)
{
	MyString s1("jack");	
	MyString s2("rose");

	s1 += s2;
	cout << s1.data() << endl;	
		

	return 0;	
}



