/*
  File:T14
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 17th,2022
  Function:T14
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x,a,b,c,d;
    cin>>x;
    a=floor(x+0.5);
    b=floor(x*10+0.5)/10;
    c=floor(x*100+0.5)/100;
    d=floor(x*1000+0.5)/1000;
    cout<<x<<"  "<<a<<endl;
    cout<<x<<"  "<<b<<endl;
    cout<<x<<"  "<<c<<endl;
    cout<<x<<"  "<<d<<endl;
    return 0;
}
