/*
  File:16
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 19th,2022
  Function:16
*/
#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout<<"Enter hours worked (-1 to end): ";
    double x,y,z;
    cin>>x;
    cout<<setprecision(2)<<fixed;
    while(x!=EOF)
    {
        cout<<"Enter hourly rate of the employee($00.00): ";
        cin>>y;
        if(x<=40)
            z=x*y;
            cout<<"Salary is $"<<z;
        if(x>40)
            z=(x-40)*y*1.5+400;
            cout<<"Salary is $"<<z;
        cout<<"\n\n"<<"Enter hours worked (-1 to end): ";
        cin>>x;
    }
    return 0;
}
