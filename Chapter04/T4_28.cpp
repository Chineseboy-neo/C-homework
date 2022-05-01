/*
  File:28
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 19th,2022
  Function:28
*/
#include<iostream>

using namespace std;

int main()
{
	int i, j;
	for (i = 1;i <= 8;i++)
	{
		if (i % 2 == 0) { cout << ' '; }
		for (j = 1;j <= 8;j++)
		{
			if (i % 2 == 1) { cout << "* "; }
			if (i % 2 == 0) { cout << "* "; }
			if (j == 8) { cout << endl; }
		}
	}
	return 0;
}