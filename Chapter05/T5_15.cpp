
/*
  File:T5_15
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:ÐÞ¸ÄGradeBook
*/#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    int x,num=0;
    while(1)
    {
        cin>>x;
        a.push_back(x);
        if(cin.get()=='\n')
            break;
    }
    int y=a.size();
    for(int i=0;i<y;i++)
    {
        switch(a[i])
        {
            case 'A':num=num+4;break;
            case 'B':num=num+3;break;
            case 'C':num=num+2;break;
            case 'D':num=num+1;break;
            case 'E':num=num+0;break;
        }
    }
    int m=num/y;
    switch(m)
    {
        case 4:cout<<"A";break;
        case 3:cout<<"B";break;
        case 2:cout<<"C";break;
        case 1:cout<<"D";break;
        case 0:cout<<"E";break;
    }
    return 0;
}
