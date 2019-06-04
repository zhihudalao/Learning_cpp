#include <iostream>
using namespace std;

class Role
{
public:
	virtual void attack() = 0;
};

class Warrior: public Role
{
public:
	virtual void attack()
	{
		cout << "我的大刀已饥渴难耐...\n";
	}
};

class Enchanter: public Role
{
public:
	virtual void attack()
	{
		cout << "冰封千里...\n";
	}
};
#if 0
class Game
{
public:
private:
};
#endif

void play(Role *role)
{
	role->attack();
}

int main(void)
{
	Warrior w;
	play(&w);

	Enchanter e;
	play(&e);

	return 0;
}


