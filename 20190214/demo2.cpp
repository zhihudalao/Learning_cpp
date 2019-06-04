#include<iostream>
#include<string>

using namespace std;

class Stu{
public:

    void init(int id,string name,float score){
        iId=id;
        strname=name;
        fscore=score;
    }

    void info(){
        cout<<"id:"<<iId<<" name:"<<strname
        <<" fscore:"<<fscore<<endl;
    }
    void setName(string name){
        strname=name;
    }

private:
    int iId;
    string strname;
    float fscore;
};

int main (int argc ,char** argv){
    Stu s;
    s.init(1001,"jack",90);
    
    Stu s1;
    s1.init(1002,"roce",80);
    
    s.info();
    s1.info();

    s1.setName("sb");
    s1.info();

    return 0;
}