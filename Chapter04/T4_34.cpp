/*
  File:34
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 19th,2022
  Function:34
*/
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
   int a,b=1,c=1;
   cin>>a;
   while(b<=a)
   {
       c=c*b;
       b++;

   }
   cout<<c;
    cout<<"========="<<endl;
    int n,i;
    double e=1;
    long long t=1;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        t=t*i;
        e=e+1.0/t;
    }
    cout<<fixed<<setprecision(10)<<e<<endl;
     cout<<"========="<<endl;
     int q,f;
     cin>>f;
     double m=1,z=1;
     for(int i=1;i<=f;i++)
     {
         m=m*i;
         q=pow(z,f);
     }
     cout<<q<<endl;
    return 0;
}
