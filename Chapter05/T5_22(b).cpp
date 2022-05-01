/*
  File:T5_22(b)
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:德摩根定律
*/
#include <iostream>

using namespace std;

int main()
{
     int x,y,a,b,g;
    cin>>a>>b>>g;
    if(!(a==b)||!(g!=5))  x=1;
    else x=0;
    if(!((a==b)||(g!=5))) y=1;
    else y=0;
    if(y==x)
        cout<<"等价"<<endl;
    else
        cout<<"不等价"<<endl;
    return 0;
}
