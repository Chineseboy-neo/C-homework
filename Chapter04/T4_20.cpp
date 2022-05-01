/*
  File:20
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 19th,2022
  Function:20
*/
#include <iostream>

using namespace std;

int main()
{
    int passes=0,failures=0,studentCounter=1;
    while(studentCounter<=10)
    {
        cout<<"Enter result (1=pass,2=fail): ";
        int result=0;
        cin>>result;
        while(result!=1&&result!=2)
        {
            cout<<"Please write a correct number"<<endl;
            cin>>result;
        }
        if(result==1)
            passes+=1;
        else
            failures+=1;
        studentCounter+=1;
    }
        cout<<"Passed"<<passes<<"\nFailed"<<failures<<endl;
        if(passes>8)
            cout<<"Bonus to instuctor!"<<endl;
    return 0;
}
