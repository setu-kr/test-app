#include <iostream>
#include <string.h>
using namespace std;

char slicer(int m, int n, string str2)
{
    for (int i = m - 1; i <= n - 1; i++)
    {
        cout << str2[i];
    }
    return 0;
}
int main()
{
    int m, n;
    
    string str2 = "setukumar";
    cin >> m >> n;
    
   
   
    slicer(m, n, str2);
    return 0;
}