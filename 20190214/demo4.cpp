#include<iostream>
#include<string>
#include<string.h>

using namespace std;

class Mystring{
public:
 	Mystring(){
        m_pData=new char[1];
        m_pData[0]='\0';
     }
    Mystring(const char *pData){
        if(NULL==pData){
            m_pData=new char[1];
            m_pData[0]='\0';
        }else{
            int iLen=strlen(pData)+1;
            m_pData=new char[iLen];
            strcpy(m_pData,pData);
        }
    }

    const char *data(){
        return m_pData;
    }

    void display(){
        cout<<m_pData<<endl;
    }

    int length(){
        return strlen(m_pData);
    }
private:
   char *m_pData;
};

int main (int argc ,char** argv){
    Mystring str("hello world");
    cout<<str.data()<<endl;
    str.display();
    cout << str.length()<<endl;
    return 0;
}