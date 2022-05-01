/*
  File:整数的各位数字
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar th,2022
  Function:求出整数的各位数字
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,time;
    b=0;
    cout<<"请输入一个五位数： ";
    cin>>a;
    for(time=1;time<=5;time++){
       b=b*10+a%10;
       a/=10;
    }
    for(time=1;time<=5;time++){
        cout<<b%10<<"   ";
        b/=10;
    }
    return 0;
}
