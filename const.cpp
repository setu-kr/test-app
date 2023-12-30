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
        cout<<this<<endl;
         cout<<this->health<<endl;
        
    
    };
};
int main()
{
    SecB Student(56);
    
   
   
    cout<<&Student<<endl;
   
   

    return 0;
}
