/*
  File:14
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 19th,2022
  Function:14
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    n=-1;
    while(n<=5){
        if(n==-1)cout<<"N\t10*N\t100*N\t1000*N\t"<<endl;
        if(n==1)cout<<"1\t10\t100\t1000\t"<<endl;
        if(n==2)cout<<"2\t20\t200\t2000\t"<<endl;
        if(n==3)cout<<"3\t30\t300\t3000\t"<<endl;
        if(n==4)cout<<"4\t40\t400\t4000\t"<<endl;
        if(n==5)cout<<"5\t50\t500\t5000\t"<<endl;
        if(n==0)cout<<endl;
        n++;
    }
    return 0;
}
