/*
  File:15
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 19th,2022
  Function:15
*/
#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout << "Enter sales in dollars (-1 to end):";
    double x,y;
    cin>>x;
    while(x!=EOF)
    {
        y=200+x*0.09;
        cout<<setprecision(2)<<fixed;
        cout<<"Salary is: $"<<y;
        cout <<"\n"<< "Enter sales in dollars (-1 to end):";
        cin>>x;
    }
    return 0;
}
