/*
  File:T7_15
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 1th,2022
  Function:T7_15
*/
#include<iostream>//预处理
using namespace std;//命名空间
int main()//主函数
{
  int array[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
  int i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<5;j++)
    {
      cout<<array[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
