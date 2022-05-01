/*
  File:算术运算
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 12th,2022
  Function:求两个数的和差积商
*/
#include <iostream>

using namespace std;

int main()
{
    double a,b,sum,difference,product,quotient;
    cout<<"请输入两个数： "<<endl;
    cin>>a>>b;
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;
    cout << "sum is "<<sum<<endl<<"difference is "<<difference<<endl<<"product is "<<product<<endl<<"quotient is "<<quotient << endl;
    return 0;
}
