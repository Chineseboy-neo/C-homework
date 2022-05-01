/*
  File:T5_12
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:ªÊ÷∆Õº∞∏
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    for(a=1;a<=10;a++)
    {
        for(b=1;b<=a;b++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=(11-i);j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
     int x,y;
    for(x=1;x<=10;x++)
    {
        for(y=1;y<=10;y++)
        {
            if(y>=x)
            cout<<'*';
            else
            cout<<' ';
        }
        cout<<endl;
    }
    int z,c;
    for(z=1;z<=10;z++)
    {
        for(c=1;c<=10;c++)
        {
            if(c>10-z)
            cout<<'*';
            else
            cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}
