#include<iostream>
using namespace std;

int main(int argc,char *argv[]){
 
    int age;
    cout<<"please input age"<<endl;
    cin>>age;
    
    int age_;
    
    int flag=1;
    while(flag){
        cout<<"please input age_"<<endl;
        cin>>age_;
        if(age==age_){
            cout<<"bingo"<<endl;
            flag=0;
        }
        if(age_<age){
            cout<<"samller"<<endl;
        }
        if(age_>age){
            cout<<"bigger"<<endl;
        }
    }

    return 0;


}