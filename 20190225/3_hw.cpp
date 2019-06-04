#include <iostream>
#include <string>
#include <string.h>
using namespace std;

template<typename U>
class MyVec
{
public:
	MyVec()
	{
		m_data = NULL;
		m_iCapacity = 0;
		m_iSize = 0;
	}
	void push_back(U data)
	{
		if (m_iSize < m_iCapacity)
		{//空间够的情况下
			m_data[m_iSize] = data;
			m_iSize += 1;
		}
		else
		{
			if (NULL == m_data)
			{
				m_data = new U[1];
				m_data[m_iSize] = data;
				m_iSize += 1;
				m_iCapacity += 1;
			}
			else
			{
				U *pdata = new U[2*m_iCapacity];
				memcpy(pdata, m_data, m_iCapacity*sizeof(U));
				delete []m_data;
				m_data = pdata;

				m_data[m_iSize] = data;
				m_iSize += 1;
				m_iCapacity = 2*m_iCapacity;

			}
		}
		cout << "size=" << m_iSize
		     << " capacity=" << m_iCapacity << endl;	
	}

private:
	U *m_data;
	int m_iCapacity;//总的空间容纳量
	int m_iSize;    //实际存放数据量
};

int main(void)
{
	MyVec<int> vec;
	vec.push_back(1);	
	vec.push_back(2);	
	vec.push_back(3);	
	vec.push_back(4);	
	vec.push_back(5);	

	return 0;
}
