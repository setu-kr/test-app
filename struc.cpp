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
    Student s1;
    s1.roll = 101;
    s1.cgpa = 9.5;
    s1.name = "setu kumar";

    cout << s1.name << endl;
    cout << s1.roll << endl;
    cout << s1.cgpa << endl;
    cout << endl;
    Student s2;
    s2.roll = 100;
    s2.cgpa = 8.5;
    s2.name = "Sid k";

    cout << s2.name << endl;
    cout << s2.roll << endl;
    cout << s2.cgpa << endl;

    return 0;
}