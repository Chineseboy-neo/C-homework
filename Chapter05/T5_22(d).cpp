/*
  File:T5_22(d)
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:��Ħ������
*/
#include <iostream>

using namespace std;

int main()
{
        int i,j,a,b;
    cin>>i>>j;
    if(!(i>4)&&!(j<=6)) a=1;
    else a=0;
    if(!((i>4)||(j<=6))) b=1;
    else b=0;
    if(a==b)
        cout<<"�ȼ�"<<endl;
    else
        cout<<"���ȼ�"<<endl;
    return 0;
}
