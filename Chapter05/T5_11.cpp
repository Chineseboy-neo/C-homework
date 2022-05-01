/*
  File:T5_11
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:¸´Àû
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double amount;
    double principal=1000.0;
    int rate;

    for(rate=5; rate<=10; rate++)
    {
        cout<<"Year"<<setw(21)<<"Amount on deposit"<<setw(8)<<"Rate"<<endl;
        cout<<fixed<<setprecision(2);
        for(unsigned int year =1; year<=10; ++year)
        {
            amount=principal*pow(1.0+0.01*rate,year);
            cout<<setw(4)<<year<<setw(21)<<amount<<setw(7)<<rate<<"%"<<endl;
        }
        cout<<endl;
    }
    return 0;
}
