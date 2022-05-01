/*
  File:表格
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar th,2022
  Function:制作表格
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,time;
    for(time=-1;time<=10;time++){
        if(time==-1) cout<<"integer  square  cube"<<endl;
        else{
                a=time;
                b=a*a;c=a*a*a;
                cout <<a<<\t<<b        <<c       <<endl;

        }
    }
    return 0;
}
