/*
  File:共乘汽车节省计算器
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar th,2022
  Function:计算每日开车的费用
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cout << "每天开的总英里数： " << endl;
    cin>>a;
    cout << "每加仑汽油的价格： " << endl;
    cin>>b;
    cout << "每加仑汽油可以开的平均英里数： " << endl;
    cin>>c;
    cout << "每日的停车费： " << endl;
    cin>>d;
    cout << "每日的通行费： " << endl;
    cin>>e;
    cout<<"每日开车的费用:"<<a*b/c+d+e<<endl;
    return 0;
}
