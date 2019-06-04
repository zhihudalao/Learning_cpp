#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car
{
public:
	Car(const char *type = "BMW", float price = 100000)
		: m_strType(type), m_fPrice(price){}

	void run() const
	{
		cout << m_strType << " price: " << m_fPrice << " run ...\n";
	}

	bool operator<(const Car &car)
	{
		return m_fPrice < car.m_fPrice;
	}	

private:
	string m_strType;
	float m_fPrice;
};

typedef vector<Car> VEC;

void bubble(VEC &vec)
{
	Car tmp;
	for (int i=0; i<vec.size()-1; i++)
	{
		for (int j=0; j<vec.size()-i-1; j++)
		{
			if (vec[j] < vec[j+1])
			{
				tmp = vec[j];
				vec[j] = vec[j+1];
				vec[j+1] = tmp;	
			}
		}
	}
}

void show(const VEC &vec)
{
	VEC::const_iterator iter = vec.begin();
	for (; iter != vec.end(); iter++)
	{
		(*iter).run();
	}
}

int main(void)
{
	VEC vec;
	vec.push_back(Car("保时捷", 200000));
	vec.push_back(Car("法拉利", 300000));
	vec.push_back(Car("劳斯莱斯", 400000));
	vec.push_back(Car("特斯拉", 500000));
	show(vec);
	cout << "...............\n\n";
	bubble(vec);
	show(vec);
	

	return 0;
}
