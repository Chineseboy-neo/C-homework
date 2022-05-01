/*
  File:14
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 19th,2022
  Function:14
*/
#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout<<"Enter account number(or -1 to quit):";
    double a,b,c,d,e;
    cin>>a;
    while(a!=EOF)
    {
    cout<<"Enter beginning balance:";
    cin>>b;
    cout<<"Enter total charges:";
    cin>>c;
    cout<<"Enter total credits:";
    cin>>d;
    cout<<"Enter credit limit:";
    cout<<setprecision(2)<<fixed;
    cin>>e;
    cout<<"New balance is "<<b+c-d;
    if(b+c-d>e)
    {
        cout<<"\n"<<"Account:      "<<a;
        cout<<"\n"<<"Credit limit:"<<e;
        cout<<"\n"<<"Balance:      "<<b+c-d;
        cout<<"\n"<<"Credit Limit Exceeded";
    }
    cout<<"\n\n";
    cout<<"Enter account number(or -1 to quit):";
    cin>>a;
    }
    return 0;
}
