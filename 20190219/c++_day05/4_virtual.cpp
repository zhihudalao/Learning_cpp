#include <iostream>
using namespace std;

class Animal
{
public:
	//若类中存在虚函数， 则系统会自动产生一块临时的存储空间
	//用来存放虚函数的入口地址，将该空间称之为虚函数表

	//系统会自动在类中添加一个指针，指向该虚函数表
	//将该指针称之为虚函数表指针
	virtual void speak()
	//void speak()
	{
		cout << "speak....\n";
	}
};

class Dog:public Animal
{
public:
	//若派生类中存在和基类虚函数A函数原型相同的函数B
	//则该派生类函数B默认为虚函数
	//会使用派生类的该函数B的地址覆盖掉虚函数表中的基类的函数A地址
	void speak()
	{
		cout << "汪汪汪....\n";
	}
};
class Cat:public Animal
{
public:
	void speak()
	{
		cout << "喵喵喵....\n";
	}
};
class Cow:public Animal
{
public:
	void speak()
	{
		cout << "哞哞哞....\n";
	}
};

class Sheep:public Animal
{
public:
	//void speak(int a, int b)
	void speak()
	{
		cout << "咩咩咩...\n";
	}
};

void animalSpeak(Animal *animal)
{
	//通过基类的指针或者引用调用虚函数时，
	//会先去虚函数表中找到该虚函数的地址，然后执行

	//若虚函数表中基类函数地址被派生类的虚函数覆盖掉了
	//则获得的地址为派生类的地址，那么执行的函数为派生类的虚函数
	animal->speak();
}

int main(void)
{
	Dog dog;
	animalSpeak(&dog);
	
	Cat cat;
	animalSpeak(&cat);
	
	Cow cow;
	animalSpeak(&cow);

	Sheep sheep;
	animalSpeak(&sheep);


	return 0;
}


