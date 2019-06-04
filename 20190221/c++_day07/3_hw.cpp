#include <iostream>
using namespace std;

class Car;

class Boat
{
public:
	Boat(float weight = 0):m_weight(weight)
	{}
	
	friend void totalWeight(Boat *boat, Car *car);

private:
	float m_weight;
};
class Car
{
public:
	Car(float weight = 0):m_weight(weight)
	{}
	friend void totalWeight(Boat *boat, Car *car);

private:
	float m_weight;
};

void totalWeight(Boat *boat, Car *car)
{
	cout << boat->m_weight+car->m_weight << endl;
}

int main(void)
{
	Boat b(90);
	Car c(10);
	totalWeight(&b, &c);

	return 0;
}
