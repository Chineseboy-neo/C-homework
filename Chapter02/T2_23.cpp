/*
  File:������С����
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar th,2022
  Function:������С����
*/
#include <iostream>

using namespace std;

int main()
{
    int a,time,largest,smallest;
     cout<<"��������������� ";
    for(time=1;time<=5;time++){
        cin>>a;
        if(time==1){largest=a;smallest=a;}
        else{
                if(largest<=a)largest=a;
                if(smallest>=a)smallest=a;
                }
    }
    cout << "Largest is "<<largest << endl;
    cout << "Smallest is "<<smallest << endl;
    return 0;
}
