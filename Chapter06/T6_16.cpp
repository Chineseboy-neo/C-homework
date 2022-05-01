/*
  File:T16
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 17th,2022
  Function:T16
*/
#include <iostream>
#include<cstdio>
#include<stdlib.h>

using namespace std;

int main()
{
    //(a)
    int n;
    n=rand()%2+1;
    cout<<"++++++++++"<<endl;
    //(b)
    n=1;
    n=rand()%100+1;
    cout<<"++++++++++"<<endl;
    //(c)
    n=1;
    n=rand()%10+0;
    cout<<"++++++++++"<<endl;
    //(d)
    n=1;
    n=rand()%113+1000;
    cout<<"++++++++++"<<endl;
    //(e)
    n=1;
    n=rand()%2-1;
    cout<<"++++++++++"<<endl;
    //(f)
    n=1;
    n=rand()%15+-3;
    return 0;
}
