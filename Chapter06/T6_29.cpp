/*
  File:T29
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 17th,2022
  Function:T29
*/
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int x,q=0;//a
    cin>>x;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
            cout<<"不是素数"<<endl,q=1;
            if(1==q)
                break;
    }
    if(0==q)
        cout<<"是素数"<<endl;
    for(int i=2;i<10000;i++)//b
    {
        int w=0;
        for(int a=2;a<i;a++)
        {
            if(i%a==0)
                w=1;
        }
        if(0==w)
            cout<<i<<" ";
    }
    int e=0;//c
    for(int i=2;i<sqrt(x);i++)
    {
        if(x%i==0)
            cout<<"\n"<<"不是素数"<<endl,e=1;
            if(1==e)
                break;
    }
    if(0==e)
        cout<<"\n"<<"是素数"<<endl;
    for(int i=2;i<10000;i++)
    {
        int r=0;
        for(int a=2;a<sqrt(i);a++)
        {
            if(i%a==0)
                r=1;
        }
        if(0==r)
            cout<<i<<" ";
    }
    return 0;
}
