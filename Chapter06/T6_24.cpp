/*
  File:T24
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 17th,2022
  Function:T24
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;//a
    cin>>a>>b;
    c=a/b;
    cout<<c<<endl;
    d=a%b;//b
    cout<<d<<endl;
    int x,y,i=0;//c
    cin>>x;
    int p[5];
    for(;x!=0;i++)
    {
        p[i]=x%10;
        x=x/10;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<p[j]<<" ";
    }
    return 0;
}
