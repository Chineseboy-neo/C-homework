/*
  File:32
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 19th,2022
  Function:32
*/
#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b<=c||a+c<=b||b+c<=a)
    {
        cout<<"不可以组成一个三角形";
    }
    else
        cout<<"可以组成一个三角形";
    return 0;
}
