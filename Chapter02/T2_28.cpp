/*
  File:�����ĸ�λ����
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar th,2022
  Function:��������ĸ�λ����
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,time;
    b=0;
    cout<<"������һ����λ���� ";
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
