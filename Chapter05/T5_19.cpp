/*
  File:T5_19
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:求Π的值
*/
#include <iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
    int i,n;
    double sum=0,a;
    cout<<"请输入项数"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {


        a=pow(-1,i+1)*4/(2*i-1);
        sum+=a;
        cout<<"取前"<<i<<"项\t"<<"Π近似为"<<sum<<endl;
    }
    return 0;
}
