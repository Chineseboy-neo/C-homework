/*
  File:25
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 19th,2022
  Function:25
*/
#include<iostream>

using namespace std;

int main()
{
	int n;//�����α߳�
	int i, j;//������
	cout << "�����������εı߳�";
	cin >> n;
	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= n;j++)
		{
			if (i == 1 || i == n || j == 1 || j == n) { cout << "*";; }
			else { cout << " "; }
			if (j == n) { cout << endl; }
		}
	}
	return 0;
}