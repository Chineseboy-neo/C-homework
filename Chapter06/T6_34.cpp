/*
  File:T34
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 17th,2022
  Function:²ÂÊı×ÖÓÎÏ·
*/
#include <iostream>
#include <ctime>
using namespace std;

void a()
{
    int x,y;
    char A;
    srand(static_cast<unsigned int>(time(0)));
    y=rand()%1000+1;
        while(1)
    {
        cin>>x;
    if(x==y)
    {cout<<"Excellent!You guessed the number!"<<"\nWould you like to play again(y or n)?"<<endl;
     cin>>A;
     if(A==y)
     {
         a();
     }
     else
        break;
    }
    if(x<y)cout<<"Too low.Try again."<<endl;
    if(x>y)cout<<"Too high.Try again."<<endl;
    }
}
int main()
{

    cout<<"I have a number between 1 and 1000."<<"\nCan you guess my number?"<<"\nPlease type your first guess."<<endl;
    a();
    return 0;
}
