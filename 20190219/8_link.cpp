#include <iostream>
using namespace std;

class People
{
public:
	People(){}
	People(const char *name, int age)
	{
		m_strName = name;
		m_iAge = age;
	}
	virtual void info() const
	{
		cout << "name:" << m_strName << " age:" << m_iAge << endl;  
	}	
protected:
	string m_strName;
	int m_iAge;
};

class Student:public People
{
public:
	Student(){}
	Student(const char *name, int age, const char *type, float score)
		: People(name, age), m_strType(type), m_fScore(score)
	{}
	void info() const
	{
		People::info();
		cout << "type:" << m_strType << " score:" << m_fScore
			 << "\n---------------\n\n";
	}
private:
	string m_strType;
	float m_fScore;
};

class Teacher: public People
{
public:
	Teacher(){}
	Teacher(const char* name, int age, const char *level
			, const char *course, float salary)
		: People(name, age), m_strLevel(level)
		  , m_strCourse(course), m_fSalary(salary)
	{}

	void info() const
	{
		People::info();
		cout << "level:" << m_strLevel << " course:" << m_strCourse
			 << " salary:" << m_fSalary
		     << "\n---------------\n\n";	 
	}

private:
	string m_strLevel;
	string m_strCourse;
	float m_fSalary;
};
#if 0
struct test
{}aa;

typedef struct test
{}aa;

typedef struct test
{}aa, *bb;
bb --> struct Test *   -->  bb a;   --> struct Test *a;
#endif
#if 0
#define char *CHAR
CHAR a, b;  -->   char *a, b;

typedef char * CHAR;
CHAR a, b;
#endif

#if 0
struct A    --> sizeof(A)
{
	struct B
	{
		int b;
	};
	int a;
};
#endif

class List
{
public:
	struct Node
	{
		Node(){data=NULL, next=NULL;}
		Node(People *p){data = p; next=NULL;}
		People *data;
		struct Node *next;	
	};

	void insert(People *people)
	{
		Node *node = new Node(people);
		node->next = m_pFirstNode;
		m_pFirstNode = node;	
	}

	void display()
	{
		Node *node = m_pFirstNode;
		while (NULL != node)
		{
			node->data->info();
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


int main(void)
{
	List l1;
	l1.insert(new People("jack", 81));
	l1.insert(new People("rose", 98));
	l1.insert(new People("kitty", 3));
	l1.display();

	cout << "------22222---------\n\n";
	
	List l2;
	l2.insert(new Student("jack2", 81, "math", 99));
	l2.insert(new Student("rose2", 98, "dance", 100));
	l2.insert(new Student("kitty2", 3, "sing", 87));
	l2.display();

	cout << "----3333-----------\n\n";

	List l3;
	l3.insert(new Teacher("kongzi", 90, "profeesor", "chinese", 90000));	l3.insert(new Student("wukong", 18, "computer", 100));
	l3.insert(new People("ususu", 10));
	l3.display();	

	cout << "---------------\n\n";

	return 0;
}
