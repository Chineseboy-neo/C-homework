/*
  File:T5_24
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:修改星号组成的菱形图案
*/
#include <iostream>

using namespace std;
int main()
{
     int i,j,n;
     cin>>n;
    for(i=1;i<=(n+1)/2;i++)
    {
        for(j=1;j<=(n+1)/2;j++)
        {
            if((i>=(n+1)/2-j)&&(i>=-(n+1)/2+j)&&(i<=(n+1)/2+j)&&(i<=3*(n+1)/2-j))
            {
                    cout<<'*';
            }
            else cout<<" ";
        }
        cout<<endl;


    }
    return 0;
}
