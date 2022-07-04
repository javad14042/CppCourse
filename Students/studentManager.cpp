#include "studentManager.h"

using namespace std;

studentManager::studentManager(string InAddress)
    :FileAddress{InAddress}
{

}

void studentManager::printStudents()
{
    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i].name << " : ";
        cout << students[i].math << " , ";
        cout << students[i].physics << " , ";
        cout << students[i].chemistry << " , ";
        cout << students[i].average << endl;
    }
}

void studentManager::ReadFile()
{
    ifstream file1(FileAddress);
    string tmp1;
    double tmp2;
    double tmp3;
    double tmp4;
    while (file1 >> tmp1 >> tmp2 >> tmp3 >> tmp4)
    {
        student stuTmp(tmp1,tmp2,tmp3,tmp4);
        stuTmp.average= stuTmp.calculateAverage();
        students.emplace_back(stuTmp);
    }
    file1.close();
}

int studentManager::ReturnIndex(string InName)
{
    for(int i=0; i<students.size(); i++)
    {
        if(students[i].name==InName) return i;
    }
        return -1;
}

void studentManager::ChangeScores(string InName,subjects special,double NewScore)
{
    if(special==subjects::math)
    {
        students[ReturnIndex(InName)].math=NewScore;

    }

    else if(special==subjects::physics)
    {
        students[ReturnIndex(InName)].physics=NewScore;

    }

    else
    {
        students[ReturnIndex(InName)].chemistry=NewScore;

    }
        students[ReturnIndex(InName)].average=students[ReturnIndex(InName)].calculateAverage();

}

