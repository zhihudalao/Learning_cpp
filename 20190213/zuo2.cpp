#include<iostream>
using namespace std;

int func(int n){
  if(n==1||n==2){
    return 1;
  }else{
    return func(n-1)+func(n-2);
  }
}
int main(int argc,char**argv){
  int n=0;
  int i=0;
  
  cout<<"please input n:";
  cin>>n;
  i=func(n);
  cout<<"Result:"<<i<<endl;
  return 0;
}


