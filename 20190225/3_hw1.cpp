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

	struct MyIter
	{
		MyIter(U *data){pData = data;}
		U *pData;
		U* operator++()
		{
			return ++pData;
		}
		U &operator*()
		{
			return *pData;
		}
		bool operator!=(const MyIter &iter) const
		{
			return pData != iter.pData;
		}
	};
	
	MyIter begin()
	{
		MyIter iter(m_data);
		return iter;	
	}
	MyIter end()
	{
		MyIter iter(m_data+m_iSize);
		return iter;	
	}


	U &operator[](int index)
	{
		return m_data[index];
	}
	const U &operator[](int index) const
	{
		return m_data[index];
	}
	int size()
	{
		return m_iSize;
	}
	int size() const
	{
		return m_iSize;
	}
	int find(U data) const
	{
		int index = -1;
		for (int i=0; i<size(); i++)
		{
			if (m_data[i] == data)
			{
				index = i;
				break;
			}
		}
		return index;
	}

	void change(int old, int newdata)
	{
		int index = find(old);
		if (-1 != index)
		{
			m_data[index] = newdata;
		}
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
#if 0
	void show() const
	{
		for (int i=0; i<size(); i++)
		{
			cout << m_data[i] << endl;
		}
	}
#endif

private:
	U *m_data;
	int m_iCapacity;//总的空间容纳量
	int m_iSize;    //实际存放数据量
};

void display(const MyVec<int> &vec)
{
	for (int i=0; i<vec.size(); i++)
	{
		cout << vec[i] << ' ';
	}
	cout << endl;
}

void showshow(MyVec<int> &vec)
{
	//typename MyVec<int>::MyIter iter = vec.begin();
	MyVec<int>::MyIter iter = vec.begin();
	for (; iter != vec.end(); ++iter)
	{
		cout << *iter << endl;
	}

}

int main(void)
{
	MyVec<int> vec;
	vec.push_back(1);	
	vec.push_back(2);	
	vec.push_back(3);	
	vec.push_back(4);	
	vec.push_back(5);	

//	vec.show();
	//display(vec);
	showshow(vec);
	vec.change(3, 888);
	cout << "-------------\n";
//	vec.show();
	display(vec);
	showshow(vec);


	return 0;
}
