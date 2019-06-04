#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class point{
public:

    point(){
        m_point1=0;
        m_point2=0;
    }
    
    point(float point1,float point2){
        m_point1=point1;
        m_point2=point2;
    }

    void info(){
        cout<<"point:"<<m_point1
        <<" "<<m_point2
        <<endl;
    }
    double distance(const point &other)
	{
		return sqrt(pow(abs(m_point1-other.m_point1), 2) + pow(abs(m_point2-other.m_point2), 2));
	}	

	void show()
	{
		cout << "point(" << m_point1 << ',' << m_point2 << ")\n";
	}
private:
    float m_point1;
    float m_point2;

};

int main (int argc ,char** argv){
    point p1;
    point p2(3,4);
    p1.info();
    p2.info();
    cout << p1.distance(p2) << endl;
    return 0;
}