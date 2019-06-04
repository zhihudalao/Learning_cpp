#include <iostream>
#include <string>
using namespace std;

class Player
{
public:
	//无参构造函数
	Player()
	{
		m_strName = "游戏npc";
		m_iBlood = 1000;
		m_strSkill[0] = "游戏指引";
		m_strSkill[1] = "任务发布";
		m_strSkill[2] = "装备买卖";
		cout << "Player()...\n";
	}
	//普通的有参构造函数
	Player(string name, int blood, string (&skill)[3])
	{
		m_strName = name;
		m_iBlood = blood;
		m_strSkill[0] = skill[0];
		m_strSkill[1] = skill[1];
		m_strSkill[2] = skill[2];
		cout << "Player(参数)...\n";
	}

	void info()
	{
		cout << "游戏人物介绍:\n";
		cout << "\t名字:" << m_strName << endl;
		cout << "\t血量:" << m_iBlood << endl;
		cout << "\t技能:" << m_strSkill[0] << ' ' << m_strSkill[1]
			 << ' ' << m_strSkill[2] << endl;
	}

private:
	string m_strName;
	int m_iBlood;
	string m_strSkill[3];
};

int main(void)
{
	Player npc;
	npc.info();

	cout << "\n.................\n\n";

	string skill[3] = {"72变", "筋斗云", "如意金箍棒"};
	Player wk("齐天大圣", 90000, skill);
	wk.info();

	return 0;
}
