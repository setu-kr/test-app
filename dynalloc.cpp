#include <iostream>
#include <string.h>
using namespace std;

class SecB
{
    private: string fullname;
    private: string company;
   
   
    public:
   string getfullname(){
    return fullname;
   };

   void setfullname(string n){
    fullname=n;
   };

   string getcompany(){
    return company;
   };

   void setcompany(string c){
    company=c;
   };


    
   
   
};
int main()
{
   SecB Student;
   SecB *Teachers= new SecB;
  ( *Teachers).setfullname(Ramesh);
   cout<<(*Teachers).getfullname();
  
    return 0;
}