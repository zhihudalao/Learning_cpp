#include<iostream>
#include<string>

using namespace std;

class Fraction{
public:
    Fraction(){
        m_mol=1;
        m_den=1;
    }
    Fraction(int mol,int den){
        mol=m_mol;
        den=m_den;
    }

private:
    int m_mol;
    int m_den;
};

int main (int argc ,char** argv){
    

    return 0;
}