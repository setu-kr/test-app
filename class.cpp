#include <iostream>
#include <string.h>
using namespace std;

class SecB
{
public:
    string fullname;
    string company;
    int age;
    string habit;
   
    float dob;

    void Intro()
    {

        cout << "Name - " << fullname << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
        cout << "Habit- " << habit << endl;
        cout << "DOB- " << dob << endl;
    }
    SecB(string Name, string Company, int Age, string Habit, float DOB)
    {
        fullname = Name;
        company = Company;
        age = Age;
        habit = Habit;
        dob = DOB;
    }
};
int main()
{
    SecB Student("Sneha Kumari", "Google", 20, "Very talkative", 5.05);
    
    Student.Intro();
    return 0;
}