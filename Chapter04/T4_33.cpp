/*
  File:33
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 19th,2022
  Function:33
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>=c||a+c>=b||b+c>=a)
    {
        if(a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b)
        {
            cout<<"���Ա�ʾһ��ֱ��������";
        }
        else
            cout<<"�����Ա�ʾһ��ֱ��������";
    }
    else
        cout<<"����������";
    return 0;
}
