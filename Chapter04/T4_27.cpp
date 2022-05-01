/*
  File:27
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 19th,2022
  Function:27
*/
#include<iostream>

using namespace std;

int main()
{
	int n;//输入的数值
	int a;//数位存储
	int b;//十进制数
	int c = 1;
	int i;
	b = 0;
	cout << "请输入一个二进制数";
	cin >> n;
	for ( i = 0; ; i++ )
	{
		a = n % 10;
		b = b + a * c;
		c = c * 2;
		n = n / 10;
		if (n == 0) { break; }
	}
	cout << b << endl;
	return 0;
}