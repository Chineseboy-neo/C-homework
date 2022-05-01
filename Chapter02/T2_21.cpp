/*
  File:用星号显示图像
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar th,2022
  Function:用星号显示图像
*/
#include <iostream>

using namespace std;

int main()
{
    //¾ØÐÎ
  int i,j;
  for(i=1;i<=9;i++)
 {
    for(j=1;j<=9;j++)
    {
        if(i==1||i==9)
        {
            cout<<"*";
        }
        else
        {
           if(j==1||j==9) cout<<"*";
           else cout<<" ";
        }
    }
    cout<<endl;
 }
   //ÍÖÔ²
 int a,b;
 for(a=1;a<=9;a++)
 {
    for(b=1;b<=9;b++)
    {
        if(a==1||a==9)
        {
            if(b==4||b==5||b==6)
                cout<<"*";
            else cout<<" ";
        }
        else if(a==2||a==8)
        {
           if(b==2||b==8) cout<<"*";
           else cout<<" ";
        }
         else if(a==3||a==4||a==5||a==6||a==7)
        {
           if(b==1||b==9) cout<<"*";
           else cout<<" ";
        }
    }
    cout<<endl;
 }
 //¼ýÍ·
 int x,y;
 for(x=1;x<=9;x++)
 {
    for(y=1;y<=9;y++)
    {
        if(x==1||x==4||x==5||x==6||x==7||x==8||x==9)
        {
            if(y==5)
                cout<<"*";
            else cout<<" ";
        }
        else if(x==2)
        {
           if(y==4||y==5||y==6) cout<<"*";
           else cout<<" ";
        }
         else if(x==3)
        {
           if(y==3||y==4||y==5||y==6||y==7) cout<<"*";
           else cout<<" ";
        }

    }
    cout<<endl;
 }
 //ÁâÐÎ
 int X,Y;
 for(X=1;X<=9;X++)
 {
    for(Y=1;Y<=9;Y++)
    {
       if(X==1||X==9)
        {
            if(Y==5)
                cout<<"*";
            else cout<<" ";
        }
       if(X==2||X==8)
        {
            if(Y==4||Y==6)
                cout<<"*";
            else cout<<" ";
        }
       if(X==3||X==7)
        {
            if(Y==3||Y==7)
                cout<<"*";
            else cout<<" ";
        }
        if(X==4||X==6)
        {
            if(Y==2||Y==8)
                cout<<"*";
            else cout<<" ";
        }
        if(X==5)
        {
            if(Y==1||Y==9)
                cout<<"*";
            else cout<<" ";
        }
    }
    cout<<endl;
 }
    return 0;
}
