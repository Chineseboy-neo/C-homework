/*
  File:T31
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 17th,2022
  Function:求最大公约数
*/
#include <iostream>

using namespace std;
int gcd(int a,int b)
{
    int i,n,gcdval;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            for(n=1;n<=b;n++)
            {
                if(b%n==0&&n==i)
                {
                    gcdval=n;

                }
            }
        }
    }
    return gcdval;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y)<<endl;
    return 0;
}
