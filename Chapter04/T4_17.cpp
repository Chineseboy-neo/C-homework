/*
  File:17
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 19th,2022
  Function:17
*/
#include <iostream>

using namespace std;

int main()
{
    int x,y=0,i=0;
    while(i<10)
    {
        cin>>x;
        if(x>y)
           y=x;
        i++;
    }
    cout<<y;
    return 0;
}
