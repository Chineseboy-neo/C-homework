/*
  File:T25
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 17th,2022
  Function:T25
*/
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int x,y,z,a,b,c;
    cin>>x>>y>>z>>a>>b>>c;
    cout<<abs(x-a)*3600+abs(y-b)*60+abs(z-c);
      return 0;
}
