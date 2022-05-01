/*
  File:T5_21
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:薪金计算
*/
#include <iostream>

using namespace std;

int main()
{
    int num,a,b,c,d;
    cin>>num;
    switch(num)
    {
    case 1:
        cout<<"请领取固定工资"<<endl;
        cin>>a;
        break;
    case 2:
        cout<<"请输入本周工作时间"<<endl;
        cin>>b;
        break;
    case 3:
        cout<<"请输入本周销售毛利"<<endl;
        cin>>c;
        break;
    case 4:
        cout<<"请输入本周生产产品件数"<<endl;
        cin>>d;
        break;
    }
    return 0;
}
