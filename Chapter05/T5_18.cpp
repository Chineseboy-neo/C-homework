/*
  File:T5_18
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:½øÖÆ±í
*/
#include <iostream>
using namespace std;

int main() {
	for(int i = 1; i <= 256; i++)
    {
		int flag = 1, num = i;
		for(int j = 256; j > 0; j /= 2)
		{
			if(num / j != 0 || flag == 0)
			{
				cout << num / j;
				flag = 0;
				num %= j;
			}
		}
		cout << "\t" << oct << i << "\t" << hex << i << endl;
	}
	return 0;
}
