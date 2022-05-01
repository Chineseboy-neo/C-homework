/*
  File:T33
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 17th,2022
  Function:T33
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int coin ();

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int i,sum=0;
    for(i=1;i<=100;i++)
    {
        sum+=coin();
    }

    cout<<"正面次数: "<<sum<<endl;;
    cout<<"背面次数: "<<100-sum;
    return 0;
}
int coin ()
{
    return rand()%2;
}
