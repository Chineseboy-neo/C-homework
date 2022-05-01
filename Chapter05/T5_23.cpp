/*
  File:T5_23
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:星号组成的菱形图案
*/
#include <iostream>

using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(1==i||9==i)
            {
                if(5==j)cout<<'*';
                else cout<<" ";
            }
            if(2==i||8==i)
            {
                if(4==j||5==j||6==j)
                    cout<<'*';
                else cout<<" ";
            }
            if(3==i||7==i)
            {
                if(3==j||4==j||5==j||6==j||7==j)
                    cout<<'*';
                else cout<<" ";
            }
            if(4==i||6==i)
            {
                if(2==j||3==j||4==j||5==j||6==j||7==j||8==j)
                    cout<<'*';
                else cout<<" ";
            }
            if(5==i)
            {
                    cout<<'*';
            }
        }
        cout<<endl;

    }
    return 0;
}
