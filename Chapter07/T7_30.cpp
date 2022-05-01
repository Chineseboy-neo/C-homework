/*
  File:T7_30
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 1th,2022
  Function:T7_30
*/
#include <iostream>
#include <vector>
using namespace std;
void printArray (vector<int>A,int x,int y);
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    cout<<endl;
    vector<int>B;
    for(size_t i=0;i<n;i++)
    {
        B.push_back(i);
    }
    printArray(B,a,b);

    return 0;
}
void printArray(vector<int>A,int x,int y)
{
    if(x==y)
        return;
    else
    {
        cout<<A[x]<< " ";
        x++;
        printArray(A,x,y);
    }
}
