/*
  File:T7_21
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 1th,2022
  Function:T7_21
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a;//�ۻ�Ա���
	int b;//��Ʒ���
	int c;//�������۶�
	int i, j;
	int arr[6][5] = { 0 };
	int judge = 1;

	for ( ; ; )
	{
		cin >> a;
		cin >> b;
		cin >> c;
		arr[a][b] = arr[a][b] + c;

		cout << "���������ϣ������� 0 " << endl; cin >> judge; if (judge == 0) { break; }
	}

	for (i = 1;i < 6;i++)
	{
		for (j = 1;j < 5;j++)
		{
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}
