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
	int n;//�������ֵ
	int a;//��λ�洢
	int b;//����������
	int c;//ԭ��ֵ
	b = 0;
	cout << "������һ����λ����";
	cin >> n;
	c = n;
	for ( ; ; )
	{
		a = n % 10;
		b = b * 10 + a;
		n = n / 10;
		if (n == 0) { break; }
	}
	if (b == c) { cout << "�ǻ�����"; }
	else { cout << "���ǻ�����"; }
	return 0;
}