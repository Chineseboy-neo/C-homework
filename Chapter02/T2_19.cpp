/*
  File:算术运算、求最大值和最小值
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 12th,2022
  Function:算术运算、求最大值和最小值
*/
#include <iostream>

using namespace std;

int main()
{
    double a,time,sum,average,product,smallest,largest;
    sum=0;
    product=1;
    cout<<"Input three different integers: ";
    for(time=1;time<=3;time++){
        cin>>a;
        sum+=a;
        product*=a;
        if(time==1){largest=a;smallest=a;}
        else{
            if(a>=largest){largest=a;}
            if(a<smallest){smallest=a;}
        }
    }
    average=sum/time;
    cout << "Sum is "<<sum << endl;
    cout << "Average is "<<average << endl;
    cout << "Product is "<<product << endl;
    cout << "Smallest is "<<smallest << endl;
    cout << "Largest is "<<largest << endl;
    return 0;
}
