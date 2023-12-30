#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll;
    float cgpa;
    string name;
};

int main()
{
    Student s1 = {2203420, 9.5, "Setu Kumar"};
    Student *ptr = &s1;
    cout << ptr->roll << endl;
    cout << (*ptr).cgpa << endl;
    cout << (*ptr).roll << endl;

    Student ECE[100];
    ECE[0].roll = 101;
    ECE[0].cgpa = 9.5;
    ECE[0].name = "setu kumar";

    Student *pr = &ECE[0];

    cout << (*pr).roll;
    return 0;
}
