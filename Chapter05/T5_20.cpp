/*
  File:T5_20
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:毕达哥拉斯的三元组
*/
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int side1,side2,hypotenuse;
    for(side1=1;side1<=500;side1++)
    {
        for(side2=side1;side2<=500;side2++)
        {
            for(hypotenuse=1;hypotenuse<=500;hypotenuse++)
            {if(hypotenuse==sqrt(side1*side1+side2*side2))
                cout<<"("<<side1<<","<<side2<<","<<hypotenuse<<")"<<endl;
            }
        }
    }


    return 0;
}
