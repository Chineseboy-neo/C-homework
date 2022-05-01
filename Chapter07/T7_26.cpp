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
int cal = 0; //统计走的顺序
//棋盘初始化为0做标记
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

bool ifOut(int x, int y)  //判断是否出界
{
	if (x >= 0 && x <= 7 && y >= 0 && y <= 7)
		return false;
	else
		return true;
}
bool ifVisited(int x, int y) //判断是否已经被访问
{
	if (chress[x][y] != 0)
		return true;
	else
		return false;
}
void dfs(int x,int y)
{
	if (cal == 64) //如果遍历完则退出棋盘一共64个位置
		return;
	if (!ifVisited(x, y) && !ifOut(x, y)) //如果没有被访问且没有出界 则访问
	{
		cal++;
		chress[x][y] = cal; //做标记
		dfs(x + 2, y + 1);	//骑士走法有八个方位，故八个 方位都遍历
		dfs(x - 2, y - 1);  //八个递归的顺序可以改，顺序不一样，结果不一样
		dfs(x + 2, y - 1);
		dfs(x - 2, y + 1);
		dfs(x - 1, y - 2);
		dfs(x + 1, y - 2);
		dfs(x + 1, y + 2);
		dfs(x - 1, y + 2);
		return;
	}
	else  //出界了则退出return
		return;

}
int main()
{
	int x, y;
	int a,b;
	int i ,j;
	cout << "请输入骑士初始的位置：";
	while (1)
	{
		cin >> x >> y; //输入坐标
		if (x > 7 || x<0 || y> 7 || y < 0)
			cout << "初始位置输入错误请重新输入" << endl;
		else
			break;
	}

	dfs(x,y);
	for (i = 0; i < 8; i++)  //输出打印测试
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
            cout<<"是"<<endl;
        else
                cout<<"否"<<endl;
    }
	return 0;
}
