#include <iostream>
using namespace std;

template<typename U>
struct Node
{
	Node();//{m_data=NULL; next=NULL;}
	Node(U data){m_data = data; next=NULL;}

	U m_data;
	struct Node *next;	
};
	
template<typename U>
Node<U>::Node(){m_data=NULL; next=NULL;}

template<typename U>
class List    //  List<int> l;
{
public:
	List(){m_pFirstNode = NULL;}
	void insert(U data)
	{
		Node<U> *node = new Node<U>(data);
		node->next = m_pFirstNode;
		m_pFirstNode = node;
	}
	void display()
	{
		Node<U> *node = m_pFirstNode;
		while (NULL != node)
		{
			cout << node->m_data << ' ';
			node = node->next;
		}
		cout << endl;
	}
private:
	Node<U> *m_pFirstNode;
};

int main(void)
{
	List<int> l_int;
	l_int.insert(12);
	l_int.insert(13);
	l_int.insert(14);
	l_int.insert(15);
	l_int.display();

	cout << "---------------\n\n";
	List<string> l_str;
	l_str.insert("aa");
	l_str.insert("bb");
	l_str.insert("cc");
	l_str.display();
	cout << "---------------\n\n";





	return 0;
}
