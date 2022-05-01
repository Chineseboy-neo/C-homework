/*
  File:身体质量指数计算题
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar th,2022
  Function:计算身体质量指数
*/
#include <iostream>

using namespace std;

int main()
{
    double weight,height,BMI;
    cin>>weight>>height;
    BMI=703*weight/(height*height);
    cout << BMI << endl;
    cout<<"BMI VALUES"<<endl;
    cout<<"Underweight: less than 18.5"<<endl;
    cout<<"Normal: between 18.5 and 24.9" <<endl;
    cout<<"Overweight: between 25 and 29.9"<<endl;
    cout<<"Obase: 30 or greater" <<endl;
    return 0;
}
