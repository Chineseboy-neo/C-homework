/*
  File:13
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 19th,2022
  Function:13
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double m,n,x,y,a,b;
    cin>>x;
    while(x!=EOF)
    {
        cin>>y;
        m=x/y;
        a+=x;
        b+=y;
        n=a/b;
        cout << setprecision(6) << fixed;
        cout<<m<<"\n"<<n;
        cin>>x;
    }
    return 0;
}
