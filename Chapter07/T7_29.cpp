/*
  File:T7_29
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 1th,2022
  Function:T7_29
*/
#include <iostream>
using namespace std;
static int time=0;  //计算多少种情况
int place[8]={0};  //放置皇后的位置 ，即对应行的列
bool flag[8]={1,1,1,1,1,1,1,1}; //宣布占领的位置
bool position[15]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}; //正对角线位置
bool negative[15]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}; //负对角线位置
void Queen(int n);
void print();
int main()
{
	Queen(0);
	return 0;
}
void Queen(int n)
{
	int col;
	for(col=0;col<8;col++)  //循环遍历每一列
	{
		if(flag[col]&&position[n-col+7]&&negative[col+n])//判断目前列和两对角线是否冲突
		{
			place[n]=col;  //放置皇后
			flag[col]=0; //宣布占领
			position[n-col+7]=0; //占领该皇后的正对角线位置
			negative[n+col]=0;   //占领该皇后的负对角线位置
			if(n<7)
			   Queen(n+1);  //放置下一行皇后
			else            //放到第七行则输出棋盘
			   print();

			flag[col]=1;  //回溯 ,复原占领的位置，考虑其他可行情况
			position[n-col+7]=1;
			negative[n+col]=1;
		}
	}
}
void print()
{
	int i,j;
    ++time;
	cout<<"第"<<time<<"个:"<<endl;
	int a[8][8]={0};
	for(i=0;i<8;i++)
	   a[i][place[i]]=1; //用8个1表示8个皇后填充到8*8棋盘的对应位置
	for(i=0;i<8;i++) //输出棋盘
	{
	    for(j=0;j<8;j++) cout<<a[i][j]<<' ';
	    cout<<endl;
	}
}

