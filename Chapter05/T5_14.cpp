/*
  File:T5_14
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:计算总销售量
*/
#include <iostream>
using namespace std;

int main()
{
    int time,num;
    double sales,salesvolume,prince;
    for(time=1;time<=5;time++)
    {
        cout<<"请输入产品编号"<<endl;
        cin>>num;
        cout<<"请输入销售量"<<endl;
        cin>>salesvolume;
        while(1)
        {
        switch (num)
        {
        case 1:
            prince= 1;
            break;
        case 2:
            prince= 2;
            break;
        case 3:
            prince= 3;
            break;
        case 4:
            prince= 4;
            break;
        case 5:
            prince= 5;
            break;
        case 6:

            while(num>5||num<=0)
            {
            cout<<"请输入0-5的数字"<<endl;
            cin>>num;
            }
        }
        }
        cout<<prince<<endl;
    }
}
