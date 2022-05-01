/*
  File:T7_26
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 1th,2022
  Function:T7_26
*/
#include<iostream>
#include<iomanip>
using namespace std;
int cal = 0; //ͳ���ߵ�˳��
//���̳�ʼ��Ϊ0�����
int chress[8][8] =
{
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0
};

bool ifOut(int x, int y)  //�ж��Ƿ����
{
	if (x >= 0 && x <= 7 && y >= 0 && y <= 7)
		return false;
	else
		return true;
}
bool ifVisited(int x, int y) //�ж��Ƿ��Ѿ�������
{
	if (chress[x][y] != 0)
		return true;
	else
		return false;
}
void dfs(int x,int y)
{
	if (cal == 64) //������������˳�����һ��64��λ��
		return;
	if (!ifVisited(x, y) && !ifOut(x, y)) //���û�б�������û�г��� �����
	{
		cal++;
		chress[x][y] = cal; //�����
		dfs(x + 2, y + 1);	//��ʿ�߷��а˸���λ���ʰ˸� ��λ������
		dfs(x - 2, y - 1);  //�˸��ݹ��˳����Ըģ�˳��һ���������һ��
		dfs(x + 2, y - 1);
		dfs(x - 2, y + 1);
		dfs(x - 1, y - 2);
		dfs(x + 1, y - 2);
		dfs(x + 1, y + 2);
		dfs(x - 1, y + 2);
		return;
	}
	else  //���������˳�return
		return;

}
int main()
{
	int x, y;
	int a,b;
	int i ,j;
	cout << "��������ʿ��ʼ��λ�ã�";
	while (1)
	{
		cin >> x >> y; //��������
		if (x > 7 || x<0 || y> 7 || y < 0)
			cout << "��ʼλ�������������������" << endl;
		else
			break;
	}

	dfs(x,y);
	for (i = 0; i < 8; i++)  //�����ӡ����
	{
		for (j = 0; j < 8; j++)
        {
            cout << setw(2)<<chress[i][j]<<"  ";
        }
		cout << endl;
	}
    if(64==cal)
    {
        if(chress[7][7]==chress[x][y])
            cout<<"��"<<endl;
        else
                cout<<"��"<<endl;
    }
	return 0;
}
