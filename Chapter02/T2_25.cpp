/*
  File:倍数
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar th,2022
  Function:看第一个数是否是第二个数的倍数
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"请输入两个整数: ";
    cin>>a>>b;
    if(a%b==0)cout<<a<<"是"<<b<<"的倍数"<<endl;
    else cout<<a<<"不是"<<b<<"的倍数"<<endl;

    return 0;
}
