/*
  File:19
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 19th,2022
  Function:19
*/
#include <iostream>

using namespace std;

int main()
{
    int counter,number,largest;
        counter=1;
    while(counter<=10)
     {
         cin>>number;
         if(counter==1)
         {
             largest=number;
         }
         else
         {
             if(largest<number)largest=number;
         }
         counter++;
     }
       cout<<largest<<endl;
    return 0;
}
