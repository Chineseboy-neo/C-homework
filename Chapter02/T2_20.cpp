/*
  File:圆的直径、周长和面积
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar th,2022
  Function:求圆的直径、周长和面积
*/
#include <iostream>

using namespace std;

int main()
{
    double Radius,Diameter,Perimeter,Area;
    cout<<"ÇëÊäÈëÔ²µÄ°ë¾¶£º ";
    cin>>Radius;
    Diameter=Radius*2;
    Perimeter=3.14159*Radius*2;
    Area=3.1415926*Radius*Radius;
    cout<<"Radius is "<<Radius<<endl;
    cout<<"Diameter is "<<Diameter<<endl;
    cout<<"Perimeter is "<<Perimeter<<endl;
    cout<<"Area is "<<Area<<endl;

    return 0;
}
