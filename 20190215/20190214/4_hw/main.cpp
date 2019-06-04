#include "student.h"

void maxStu(Student (&stu)[3])
{
    int max = 0;
    for (int i=1; i<3; i++)
    {
        if (stu[i].score() > stu[max].score())
        {
            max = i;
        }
    }
    stu[max].info();
}

int main()
{
    Student stu[3];
    string strName;
    float score;
    for (int i=0; i<3; i++)
    {
        cout << "input name and score:\n";
        cin >> strName >> score;
        stu[i].setInfo(strName.c_str(), score);
    }

    maxStu(stu);

    cout << "Hello World!" << endl;
    return 0;
}
