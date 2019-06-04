#include<iostream>
#include<string.h>
using namespace std;

typedef struct Student{
    int id;
    char name[20];
    float score;
}Stu;

void input(Stu &s,int num ){
    
}

void info(const Stu &s){
    
    cout<<"stuid="<< s.id
    <<" stuName="<<s.name
    <<"stuScore="<<s.score<<endl;

}
int main(int argc,char *argv[]){
    
    int *p1=new int[12];
    int (*p2)[2]=new int [3][2];

    

    return 0;


}