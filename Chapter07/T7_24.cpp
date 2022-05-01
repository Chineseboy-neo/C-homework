/*
  File:T7_24
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 1th,2022
  Function:T7_24
*/
#include<iostream>
#include<string>
using namespace std;

class Queen
{
private:
	int Place(int k);
	int *x;
	int num;

public:
	Queen(int n);
	~Queen();
	void Set_Queen();
	void Print_Queen();
};

Queen::Queen(int n):num(n)
{
	x = new int[n];
	for (int i = 0; i < this->num; i++)
	{
		x[i] = -1;
	}
}

Queen::~Queen()
{
	delete[]x;
}
int Queen::Place(int k)
{
	for (int i = 0; i < k; i++)
	{
		if (x[i] == x[k] || abs(i - k) == abs(x[i] - x[k]))
		{
			return 1;
		}
	}
	return 0;

}

void Queen::Set_Queen()
{
	int k = 0, count = 0;
	while (k >= 0)
	{
		x[k]++;

		while (x[k] < this->num && this->Place(k) == 1)
		{
			x[k]++;
		}
		if (x[k] < this->num && k == this->num - 1)
		{
			cout << "第" << ++count << "个解是：\t";
			this->Print_Queen();
		}

		else if (x[k] < this->num && k < this->num - 1)
		{
			k = k + 1;
		}

		else
		{
			x[k--] = -1;
		}

	}
}


void Queen::Print_Queen()
{
	for (int i = 0; i < this->num; i++)
	{
		cout << x[i] + 1 << "\t";
	}
	cout << endl;
}

int main()
{
	cout << "请输入想要摆放的皇后个数（n >= 4）：";
	int n;
	cin >> n;
	Queen q(n);
	q.Set_Queen();

	system("pause");
	return 0;
}

