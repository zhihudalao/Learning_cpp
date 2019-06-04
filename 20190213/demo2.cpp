#include<iostream>
#include<string.h>
using namespace std;

typedef struct Student{
    int id;
    char name[20];
    float score;
}Stu;

void swap(Stu &s1,Stu &s2){
    Stu temp=s1;
    s1=s2;
    s2=temp;
}

void info(const Stu &s){
    
    cout<<"stuid="<< s.id
    <<" stuName="<<s.name
    <<"stuScore="<<s.score<<endl;

}
int main(int argc,char *argv[]){
    
    Stu s1={1,"lc",98.7};
    
    Stu s2={2,"lcc",96.5};
    info(s1);
    info(s2);
    swap(s1,s2);
    info(s1);
    info(s2);
    
    return 0;


}