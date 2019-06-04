#include<iostream>
using namespace std;

int main(int argc,char *argv[]){
 
    for(int i=0;i<10;i++){
        cout<<i<<endl;

    }
    int a=0;
    float b=0.0f;
    //char buf[32]={'\0'};
    //cin>>a>>b>>buf;
    //cout<<" a="<< a <<" b="<<b<<" buf="<<buf<<endl;
    
    int data=1995;
    int &buf=data;
    cout<<"data= "<<data<<" buf="<<buf<<endl;
    cout<<"&data= "<<&data<<" &buf="<<&buf<<endl;
    int num=1996;
    buf=num;
    cout<<"data= "<<data<<" buf="<<buf<<endl;
    cout<<"&data= "<<&data<<" &buf="<<&buf<<endl;
 

    return 0;


}