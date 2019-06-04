#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
public:
	MyString(const char *data = NULL)
	{
		if (NULL == data)
		{
			m_pData = new char[1];
			m_pData[0] = '\0';
		}
		else
		{
			int iLen = strlen(data)+1;
			m_pData = new char[iLen];
			strcpy(m_pData, data);
		}
		cout << "MyString(const char* data)...\n";
	}

	MyString(const MyString &other)
	{
		int iLen = strlen(other.m_pData)+1;
		m_pData = new char[iLen];
		strcpy(m_pData, other.m_pData);
		cout << "MyString(const MyString &other)...\n";
	}

	~MyString()
	{
		delete []m_pData;
		m_pData = NULL;
		cout << "~MyString()...\n";
	}

	MyString &operator=(const MyString &other)
	{
		delete []m_pData;
		m_pData = NULL;
		
		int iLen = strlen(other.m_pData)+1;
		m_pData = new char[iLen];
		strcpy(m_pData, other.m_pData);
		cout << "operator=(const MyString &other)...\n";

		return *this;
	}

	const char *data() const
	{
		return m_pData;
	}

	MyString operator+(const MyString &other) const
	{
		MyString ret;
		delete ret.m_pData;
		ret.m_pData = NULL;

		int iLen = strlen(m_pData)+strlen(other.m_pData)+1;
		ret.m_pData = new char[iLen];
		strcpy(ret.m_pData, m_pData);
		strcat(ret.m_pData, other.m_pData);

		cout << "operator+(const MyString &)...\n";
		return ret;
	}

	char operator[](int index)
	{
//		return m_pData[index];
		return *(m_pData+index);
	}

private:
	char *m_pData;
};

ostream& operator<<(ostream &out, const MyString &str)
{
	out << str.data();
	return out;
}


int main(void)
{
	MyString s1("hello");
	MyString s2("world");
	MyString s3;
	s3 = s1+s2;
	cout << s3 << endl;

	cout << s1[1] << endl;

#if 0
	MyString s1("hello");
//	MyString s2(s1);
//	MyString s2 = s1;

	MyString s2("world");
	s2 = s1;
//	cout << s1;  // operator<<(cout, s1);

	cout << s1 << ' ' << s2 << endl;
#endif
	
	return 0;
}








