#include <iostream>
using namespace std;

class Animal
{
public:
	Animal(){}
	Animal(string name):m_strName(name){}
	virtual void show() = 0;
	string name()
	{
		return m_strName;
	}
protected:
	string m_strName;
};
class Lion : public Animal
{
public:
	Lion(){}
	Lion(string name):Animal(name){}
	virtual void show()
	{
		cout << m_strName << "(狮子):跳火圈...\n";
	}
};
class Elephant: public Animal
{
public:
	Elephant(){}
	Elephant(string name):Animal(name){}
	virtual void show()
	{
		cout << m_strName << "(大象):踩背...\n";
	}
};
class Dolphin : public Animal
{
public:
	Dolphin(){}
	Dolphin(string name):Animal(name){}
	virtual void show()
	{
		cout << m_strName << "(海豚):驮美女...\n";
	}
};

class List
{
public:
	struct Node
	{
		Node(){data=NULL; next=NULL;}
		Node(Animal *p){data = p; next=NULL;}
		Animal *data;
		struct Node *next;	
	};
//	void test(){   cout << data << endl;}
	void insert(Animal *p)
	{
		Node *node = new Node(p);
		node->next = m_pFirstNode;
		m_pFirstNode = node;	
	}

	void display()
	{
		Node *node = m_pFirstNode;
		while (NULL != node)
		{
			node->data->show();
			node = node->next;
		}	
	}
	void delNodeByName(string name)
	{
		Node *node = m_pFirstNode;
		Node *pre = m_pFirstNode;
		while (NULL != node)
		{
			if (name == node->data->name())
			{
				if (node == m_pFirstNode)
				{
					m_pFirstNode = node->next;
				}
				else
				{
					pre->next = node->next;	
				}
				delete node;
			}
			pre = node;
			node = node->next;	
		}

	}
	List()
	{
		m_pFirstNode = NULL;
	}
private:
	Node *m_pFirstNode;
};

class Trainer
{
public:
	void addAnimal(Animal *a)
	{
		m_animalList.insert(a);
	}
	void animalShow()
	{
		m_animalList.display();
	}
	void delAnimal(string name)
	{
		m_animalList.delNodeByName(name);
	}
private:
	List m_animalList;
};

int main(void)
{
	Trainer t;
	t.addAnimal(new Lion("辛巴"));
	t.addAnimal(new Dolphin("肉丝"));
	t.addAnimal(new Elephant("石来安"));

	t.animalShow();

	cout << "---------------\n\n";
	string name;
	cout << "请输入要删除的动物名字:\n";
	cin >> name;
	t.delAnimal(name);
	t.animalShow();

	cout << "---------------\n\n";

	return 0;
}
