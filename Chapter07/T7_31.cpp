/*
  File:T7_31
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 1th,2022
  Function:T7_31
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void stringReverse(string A,int x);
int main()
{
    int a;
    cin>>a;
    string B;
    cin>>B;

    stringReverse(B,a);

    return 0;
}
void stringReverse(string A,int x)
{


    if(x==1)
    {
        cout<<A[x-1];
        return;
    }
    else
    {
        cout<<A[x-1];
        x--;
        stringReverse(A,x-1);
    }
}
