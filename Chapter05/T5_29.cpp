/*
  File:T5_29
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:彼得·蜜纽伊特问题
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double amount,t;
    double principal=24;
    double rate=0.05;
    cout<<"Year"<<setw(21)<<"Amount on deposit"<<endl;
    cout<<fixed<<setprecision(2);


        for(unsigned int year=1;year<=387;++year)
    {
        amount=principal*pow(1.0+rate,year);
        cout<<setw(4)<<year<<<setw(21)<<amount<<endl;
    }


    return 0;
}
