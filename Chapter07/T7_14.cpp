/*
  File:T7_14
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 1th,2022
  Function:T7_14
*/
#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec;
    for(int i=0;i<20;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}
