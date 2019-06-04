#include <iostream>
using namespace std;

class Operation
{
public:
	Operation(double a=0, double b=0)
	{
		m_numA = a;
		m_numB = b;
	}

	void setNumA(double a)
	{
		m_numA = a;
	}
	void setNumB(double b)
	{
		m_numB = b;
	}

	virtual double getResult() = 0;

protected:
	double m_numA;
	double m_numB;
};

class Add : public Operation
{
public:
	Add(double a=0, double b=0):Operation(a, b)
	{}

	double getResult()
	{
		return m_numA+m_numB; 
	}
};

class Sub : public Operation
{
public:
	Sub(double a=0, double b=0):Operation(a, b)
	{}

	double getResult()
	{
		return m_numA-m_numB; 
	}
};

class Mul : public Operation
{
public:
	Mul(double a=0, double b=0):Operation(a, b)
	{}

	double getResult()
	{
		return m_numA*m_numB; 
	}
};

class Factory
{
public:
	static Operation *creatOpe(char ope)
	{
		Operation *operation = NULL;
		switch (ope)
		{
		case '+':
			operation = new Add;
			break;
		case '-':
			operation = new Sub;
			break;
		case '*':
			operation = new Mul;
			break;
		default:
			break;
		}	

		return operation;
	}
};

int main(void)
{
	char ope;
	cout << "请输入要进行什么运算...\n";
	cin >> ope;

	Operation *oper = Factory::creatOpe(ope);
	double numA;
	double numB;
	cout << "请输入要参加运算的数据:\n";
	cin >> numA >> numB;
	oper->setNumA(numA);
	oper->setNumB(numB);

	cout << "结果：" << oper->getResult() << endl;




 

	return 0;
}






