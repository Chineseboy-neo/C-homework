/*
  File:T18
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 17th,2022
  Function:T18
*/
#include <iostream>

using namespace std;

int main()
{
    int base,exponent,a=1;
    cin>>base;
    cin>>exponent;
    for(int i=0;i<exponent;i++)
    {
        a=a*base;
    }
    cout<<a<<endl;
    return 0;
}
