/*
  File:T5_25
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:È¥³ýbreakºÍcontinue
*/
#include <iostream>

using namespace std;

int main()
{
    unsigned int count;
    for(count=1;count<=10;++count)
    {
        if(count!=5)
        {
            cout<<count<<" ";
        }
        else
        {
            continue;
        }

    }
    return 0;
}
