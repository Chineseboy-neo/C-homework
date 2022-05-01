/*
  File:T32
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 17th,2022
  Function:¼ò»¯·ÖÊý
*/
#include <iostream>

using namespace std;

int qualityPoints(int points)
{
    int Points;
    int A=points/10;
    switch(A){
case 1:
case 2:
case 3:
case 4:
case 5:
    Points=0;
    break;
case 6:
    Points=1;
    break;
case 7:
    Points=2;
    break;
case 8:
    Points=3;
    break;
case 9:
case 10:
    Points=4;
    break;
default:
    break;}
    return Points;
}
int main()
{
    int x;
    cin>>x;
    cout<<qualityPoints(x)<<endl;
    return 0;
}
