/*
  File:T26
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 17th,2022
  Function:T26
*/
#include <iostream>
#include<iomanip>

using namespace std;

double cel(double x);
double fah(double x);
int main()
{
    cout<<setprecision(2)<<fixed;
    for(double i=0;i<=100;i++)
    {
        int x=i;
        double a=fah(i);;
        cout<<x<<" "<<a<<"\n";
    }
    for(double i=32;i<=212;i++)
    {
        int x=i;
        double a=cel(i);
        cout<<x<<" "<<a<<"\n";
    }
    return 0;
}
double cel(double x)
{
    double y=(x-32)/1.80;
    return y;
}
double fah(double x)
{
    double y=32+x*1.80;
    return y;
}
