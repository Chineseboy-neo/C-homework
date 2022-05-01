/*
  File:T7_16
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 1th,2022
  Function:T7_16
*/
#include <iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int a[11]={0};
    int n=2;
    for(int i=0;i<36000;i++)
    {
        int c=rand()%6+1;
        int b=rand()%6+1;
        int sum=c+b;
        a[sum-2]=a[sum-2]+1;
    }
    for(int i=0;i<11;i++)
    {
        cout<<"和为"<<n<<"时投掷次数为"<<a[i]<<"\n";
        n++;
    }
    int q=2;
    for(int i=0;i<11;i++)
    {
        double avg=a[i]/36000.0;
        cout<<"和为"<<q<<"时投掷的概率为"<<avg<<"\n";
        q++;
    }

    return 0;
}
