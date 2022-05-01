/*
  File:T12
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 17th,2022
  Function:T12
*/
#include <iostream>

using namespace std;

int main()
{
    double c1,c2,c3,h1,h2,h3;
    cin>>h1;
    if(h1<=3)
    {
        c1=2.00;
    }
    else if(3<h1&&h1<24)
    {
        c1=2.00+0.50*(h1-3);
    }
    else if(h1==24)
    {
        c1=10.00;
    }
    cin>>h2;
    if(h2<=3)
    {
        c2=2.00;
    }
    else if(3<h2&&h2<24)
    {
        c2=2.00+0.50*(h2-3);
    }
    else if(h2==24)
    {
        c2=10.00;
    }
    cin>>h3;
    if(h3<=3)
    {
        c3=2.00;
    }
    else if(3<h3&&h3<24)
    {
        c3=2.00+0.50*(h3-3);
    }
    else if(h3==24)
    {
        c3=10.00;
    }
    cout<<"Car     Hours     Charge"<<endl;
    cout<<"1        "<<h1<<"         "<<c1<<endl;
    cout<<"2        "<<h2<<"         "<<c2<<endl;
    cout<<"3       "<<h3<<"        "<<c3<<endl;
    cout<<"TOTLE   "<<h1+h2+h3<<"      "<<c1+c2+c3<<endl;

    return 0;
}
