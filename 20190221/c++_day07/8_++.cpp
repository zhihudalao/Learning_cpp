#include <iostream>
#include <unistd.h>
using namespace std;

class Time
{
public:
	Time(int m=0, int s=0):m_minute(m), m_second(s){}
	void show()
	{
		cout << m_minute << ':' << m_second << endl;
	}

	Time &operator++()
	{
		m_second++;
		if (60 == m_second)
		{
			m_second = 0;
			m_minute++;
			if (60 == m_minute)
			{
				m_minute = 0;
			}
		}

		return *this;
	}	
	
	Time operator++(int)  //后++
	{
		Time ret = *this;

		m_second++;
		if (60 == m_second)
		{
			m_second = 0;
			m_minute++;
			if (60 == m_minute)
			{
				m_minute = 0;
			}
		}
		cout << "^_^ 6666\n";
		return ret;
	}	

private:
	int m_minute;
	int m_second;
};

int main(void)
{
	Time t(59, 55);
	t.show();

	Time t2;
	t2 = t++;
	t.show();
	t2.show();


#if 0
	Time t2;
   	t2 = ++t;
	t.show();
	t2.show();
	while (1)
	{
		++t;
		t.show();
		sleep(1);
	}
#endif
	return 0;
}






