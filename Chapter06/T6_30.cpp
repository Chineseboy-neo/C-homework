/*
  File:T30
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 17th,2022
  Function:T30
*/
#include<iostream>
using namespace std;

int reverseNum(int );//����ԭ��
void reverseNum2(int );//����ԭ�ͣ��ݹ�ʵ�֣�

int main(){
	int num;
	cin >> num;
    reverseNum2(num);
}

void reverseNum2(int num){

	if(num / 10 == 0){
		cout << num << endl;
	}
	else{
		cout << num-(num / 10) * 10;
		reverseNum2(num / 10);
	}
}
