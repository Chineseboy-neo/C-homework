/*
  File:T5_16
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:¸´Àû¼ÆËã
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m=1;
	int rate=5;
	int principal=1000;
	for(int year=1;year<=10;year++)
	{
		m=m*(100+rate);
	}

	cout<<(principal*m)/100000<<"."<<principal*m-((principal*m)/100)*100<<endl;
}
