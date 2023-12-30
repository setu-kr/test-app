#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n,i;
    double sum=0;
    cout<<"Enter the value of n"<<endl;;
    cin>>n;
    double a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" Eigen Value"<<endl;
        cin>>a[i];
        sum+=abs(a[i]);
    }
    cout<<"Sum of lambda= "<<sum<<endl;
   double result=0;
    for(i=0;i<n;i++)
    {
        cout<<endl;
       cout<<abs(a[i])<<"/"<<sum<<"log"<<abs(a[i])<<"/"<<sum<<endl;
       if(a[i]==0)
       {
           cout<<"i="<<i+1<<"  Value is "<<0<<endl;
       continue;
       }
       double check=abs((a[i])/sum)*(log(abs(a[i])/sum));
       cout<<"i="<<i+1<<"  Value is  "<<check<<endl;
       result+= check;
       
    }
    cout<<endl;
    cout<<"Answer=  "<<abs(result)<<endl;

    return 0;
}