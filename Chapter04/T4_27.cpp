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
	int n;//�������ֵ
	int a;//��λ�洢
	int b;//ʮ������
	int c = 1;
	int i;
	b = 0;
	cout << "������һ����������";
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