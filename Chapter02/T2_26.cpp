/*
  File:����ͼ��
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar th,2022
  Function:��������ͼ��
*/
#include <iostream>

using namespace std;

int main()
{//��һ
    cout<<"* * * * * * * * "<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * * "<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * * "<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * * "<<endl;
    cout<<" * * * * * * * *"<<endl;
 //����
    int i,j;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=16;j++)
        {
            if(i==1||i==3||i==5||i==7)
            {
              if(j%2==0)cout<<" ";
              else cout<<"*";
            }
           else
            {
              if(j%2!=0)cout<<" ";
              else cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}
