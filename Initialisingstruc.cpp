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
    cout << s1.name << endl;
    cout << s1.roll << endl;
    cout << s1.cgpa << endl;
    return 0;
}