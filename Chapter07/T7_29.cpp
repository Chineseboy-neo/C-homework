/*
  File:T7_29
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 1th,2022
  Function:T7_29
*/
#include <iostream>
using namespace std;
static int time=0;  //������������
int place[8]={0};  //���ûʺ��λ�� ������Ӧ�е���
bool flag[8]={1,1,1,1,1,1,1,1}; //����ռ���λ��
bool position[15]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}; //���Խ���λ��
bool negative[15]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}; //���Խ���λ��
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
	for(col=0;col<8;col++)  //ѭ������ÿһ��
	{
		if(flag[col]&&position[n-col+7]&&negative[col+n])//�ж�Ŀǰ�к����Խ����Ƿ��ͻ
		{
			place[n]=col;  //���ûʺ�
			flag[col]=0; //����ռ��
			position[n-col+7]=0; //ռ��ûʺ�����Խ���λ��
			negative[n+col]=0;   //ռ��ûʺ�ĸ��Խ���λ��
			if(n<7)
			   Queen(n+1);  //������һ�лʺ�
			else            //�ŵ����������������
			   print();

			flag[col]=1;  //���� ,��ԭռ���λ�ã����������������
			position[n-col+7]=1;
			negative[n+col]=1;
		}
	}
}
void print()
{
	int i,j;
    ++time;
	cout<<"��"<<time<<"��:"<<endl;
	int a[8][8]={0};
	for(i=0;i<8;i++)
	   a[i][place[i]]=1; //��8��1��ʾ8���ʺ���䵽8*8���̵Ķ�Ӧλ��
	for(i=0;i<8;i++) //�������
	{
	    for(j=0;j<8;j++) cout<<a[i][j]<<' ';
	    cout<<endl;
	}
}

