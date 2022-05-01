/*
  File:T7_18
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 1th,2022
  Function:T7_18
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int  main()
{
    for(int i=0;i<1000;i++)
    {
        int a1,a2,o=0,p=0;
	int sum;
	int times=0;
	int result;
	srand(time(NULL));
	a1=rand()%6+1;
	a2=rand()%6+1;
	sum=a1+a2;
	printf("%d\n",sum);

	if (sum==7 || sum==11)
	{
		printf("You win!\n");
	}
	else if (sum==2 || sum==3 || sum==12)
	{
		printf("You lost!\n");
	}
	else
	{
		result=sum;
		do
		{
			a1=rand()%6+1;
			a2=rand()%6+1;
			sum=a1+a2;
			times++;
			if (times>7)
			{
				printf("You lost!\n"),o++;
				break;
			}
			printf("%d:%d\n",times,sum);
			if (sum==result)
			{
				printf("You win!\n"),p++;
				break;
			}
		} while (times<=7);
	}
    }
	return 0;
}
