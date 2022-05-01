/*
  File:T7_27
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 1th,2022
  Function:T7_27
*/
#include <iostream>

using namespace std;

int main()
{
    int a[1000]={1};
    int j=0;
    cout<<"2 3 5 7 ";
    for(int i=0;i<1000;i++)
    {

        while(i>=2)
        {
            if(i%2==0||i%3==0||i%5==0||i%7==0)
            {
                a[i]=0;
                break;
            }
            else
            {
                a[i]=1;
                j=i;

                cout<<j<<" ";
                break;
            }
        }
    }
    return 0;
}
