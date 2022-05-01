/*
  File:T8_12
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 1th,2022
  Function:T7_12
*/
#include <iostream>
#include<stdlib.h>
#include <ctime>
using namespace std;



int randnum()
{
    return 1+rand()%10;
}

void moveTortoise(int &x)
{
    int r = randnum();
    if(r<=5)
        x=x+3;
    else if(r>5 && r<=7)
        x=x-6;
    else
        x=x+1;

    if(x<0)
        x=0;

   }
void moveHare(int &x)
{
    int r = randnum();
    if(r<=2)
        x=x;
    else if(r>2 && r<=4)
        x=x+9;
    else if(x>4 && x<=5)
        x=x-12;
    else if(x>5 && x<=8)
        x=x+1;
    else
        x=x-2;

    if(x<0)
        x=0;


     }

int main()
{
    int i=0;
    srand(time(NULL));
    int t=0,h=0;
    int tt=0,hh=0;

    for(int k=0;k<1;k++)
    {
        t=0;
        h=0;
        while(t<=70&&h<=70)
        {
            system("cls");
            moveTortoise(t);
            moveHare(h);
            if(t==h)
            {
                h=h-2;
            }
            if(h<0)
            {
                 h=0;
            }

                cout<<"OUCH!!!";
            }
            i++;

        if(t>h)
        {
            cout<<"TORTOISE WINS!!!YAY!!!";           t++;
        }
        else if(t<h)
        {
            cout<<"Hare wins.Yuch.";           h++;
        }
        else
            cout<<"It's a tie.";
    }
    cout<<":";
    system("pause");
    return 0;
}

