/*
  File:T27
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 17th,2022
  Function:T27
*/
#include <iostream>

using namespace std;

int main()
{
    double x,y,z;
    cin>>x>>y>>z;
    double m=x;
    if(x>y)
        m=y;
    if(m>z)
        m=z;
    cout<<m;
}
