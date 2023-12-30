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

   void setfullname(int n){
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
   Student.setcompany("XYZ");
   cout<<Student.getcompany();
    return 0;
}