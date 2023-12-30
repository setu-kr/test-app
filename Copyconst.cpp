#include <iostream>
#include <string.h>
using namespace std;

class SecB
{
public:
    int health;
    SecB(int health)
    {
        this->health = health;
    };

    SecB(SecB &Sneha)
    {
        this->health = Sneha.health;
        cout << Sneha.health << endl;
        cout<<"Copy const called"<<endl;
    }

    void print()
    {
        cout << this->health << endl;
    }
};
int main()
{
    SecB Student(56);
    SecB h(Student);

    return 0;
}
