/*
  File:T7_28
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 1th,2022
  Function:T7_28
*/
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    b = a;
    reverse( a.begin() , a.end() );
    if(a==b)
    {
        cout << "�ǻ�����" <<endl;
    }
    else
    {
        cout << "���ǻ�����" <<endl;
    }


    return 0;
}
