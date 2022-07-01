#include "studentManager.h"

using namespace std;

void studentManager::printStudents()
{
    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i].name << " : ";
        cout << students[i].math << " , ";
        cout << students[i].physics << " , ";
        cout << students[i].chemistry << " , ";
        cout << students[i].calculateAverage() << endl;
    }
}
