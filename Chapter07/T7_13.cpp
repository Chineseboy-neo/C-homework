/*
  File:T7_13
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 1th,2022
  Function:T7_13
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a[20];
	for(int i=0;i<20;i++)
    {
        cin>>a[i];
    }
	sort(a, a + 20);
	cout << a[0];
	for (int i = 1; i<20; i++)
	{
		if (a[i] != a[i - 1])
			cout << " " << a[i];
	}
	cout << endl;
}
