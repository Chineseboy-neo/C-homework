/*
  File:T5_22(a)
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:��Ħ������
*/
#include <iostream>

using namespace std;

int main()
{
    int x,y,a,b;
    cin>>x>>y;
    if(!(x<5)&&!(y>=4)) a=1;
    else a=0;
    if(!((x<5)||(y>=7))) b=1;
    else b=0;
    if(a==b)
        cout<<"�ȼ�"<<endl;
    else
        cout<<"���ȼ�"<<endl;


    return 0;
}
