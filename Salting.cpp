#include <iostream>
#include <string.h>
using namespace std;

char salted(char pass[], char salt[])
{
    strcat(pass, salt);
    cout << "new password is " << pass;
    return 0;
}
int main()
{
    char pass[100], salt[100];
    cin >> pass >> salt;
    salted(pass, salt);
    return 0;
}