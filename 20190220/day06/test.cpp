#include <iostream>
#include <string.h>
using namespace std;

class A 
{
public:
   virtual ~A() {cout << "~A()...\n";}
   virtual void output( ) { }
};
class B:public A 
{
public:
    B(const char* info)
    {
      m_buf=new char[256];
      strcpy(m_buf,info);  
  	}
   ~B( ) { delete[] m_buf; cout << "~B()...\n";} 
   virtual void output( ) { cout << m_buf << endl; }
   char *m_buf;
};
int main()
{
   A*pa = new B("hello!");
   pa->output( );
   delete pa; 

   return 0;
}
