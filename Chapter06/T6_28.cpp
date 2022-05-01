/*
  File:T28
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 17th,2022
  Function:T28
*/
#include<iostream>
using namespace std;
int main()
{
    int s,x=0,a[999];
    for(int i=1;i<=1000;i++)
    {
        s=0;                       //s值初始化
        for(int j=1;j<i;j++)       //求一个数的因数，若是则累加到s
        {
            if(i%j==0)              //判断此时的j是否为i的因子
            s+=j;
            x++;
        }
        if(s==i)
        {
            cout<<s<<"=";
            for(int j=1;j<i;j++)
            {
                if(i%j==0)
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
    return 0;
}
