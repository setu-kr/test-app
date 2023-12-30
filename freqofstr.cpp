#include <iostream>
#include <string.h>
using namespace std;
void freq(char str[], char x)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (x == str[i])
        {
            count++;
        }
    }
  cout<<count;
}

int main()
{
    char str[100];
    char x;
   
    cin >> str >> x;
    freq(str, x);
   
    return 0;
}