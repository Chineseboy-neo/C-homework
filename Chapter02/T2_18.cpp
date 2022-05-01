/*
  File:整数比较
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 12th,2022
  Function:整数比较
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"请输入两个整数: "<<endl;
    cin>>a>>b;
    if(a>b)
    cout << a<<" is large" << endl;
    else if(a<b)
    cout << b<<" is large" << endl;
    else if(a=b)
    cout << "These numbers are equal" << endl;
    return 0;
}
