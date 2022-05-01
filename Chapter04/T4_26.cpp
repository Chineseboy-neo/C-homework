/*
  File:26
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 19th,2022
  Function:26
*/
#include<iostream>

using namespace std;

int main()
{
	int n;//输入的数值
	int a;//数位存储
	int b;//倒过来的数
	int c;//原数值
	b = 0;
	cout << "请输入一个五位整数";
	cin >> n;
	c = n;
	for ( ; ; )
	{
		a = n % 10;
		b = b * 10 + a;
		n = n / 10;
		if (n == 0) { break; }
	}
	if (b == c) { cout << "是回文数"; }
	else { cout << "不是回文数"; }
	return 0;
}