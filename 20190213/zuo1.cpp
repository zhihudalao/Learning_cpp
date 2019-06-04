#include<iostream>
using namespace std;
void sort( int(&a)[10]){
    int temp;
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            if(a[j]>a[(j+1)]){
                temp=a[j];
                a[j]=a[(j+1)];
                a[(j+1)]=temp;
            }
        }
    }
}
void info( int (&a)[10]){
    for(int i=0;i<10;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
}
int main(int argc,char *argv[]){
 
    int arr[10]={5,8,6,5,4,9,7,14,25,50};
    sort(arr);
    info(arr);
    return 0;


}