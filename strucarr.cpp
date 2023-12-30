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
    Student ECE[100];
    ECE[0].roll = 101;
    ECE[0].cgpa = 9.5;
    ECE[0].name = "setu kumar";

    cout << ECE[0].name << endl;
    cout << ECE[0].roll << endl;
    cout << ECE[0].cgpa << endl;
    cout << endl;

    ECE[1].roll = 100;
    ECE[1].cgpa = 7.5;
    ECE[1].name = "sid k";
    cout << ECE[1].name << endl;
    cout << ECE[1].roll << endl;
    cout << ECE[1].cgpa << endl;
    cout << endl;
    Student BCA[100];
    BCA[0].roll = 2230420;
    BCA[0].cgpa = 8.0;
    BCA[0].name = "Setu Kumar";

    cout << BCA[0].name << endl;
    cout << BCA[0].roll << endl;
    cout << BCA[0].cgpa << endl;

    return 0;
}