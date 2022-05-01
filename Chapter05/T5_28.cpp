/*
  File:T5_28
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Apr 2th,2022
  Function:歌曲"圣诞节的十二天"
*/
#include<iostream>
using nameapace std;
int main()
{
    int day[12];
    int gift[12];
    for (int i=1;i<=12;i++){
		switch (i){
		case  1:
			day[i]="first";
			break;
		case  2:
			day[i]="second";
			break;
		case  3:
			day[i]="third";
			break;
		case  4:
			day[i]="fourth";
			break;
		case  5:
			day[i]="fifth";
			break;
		case  6:
			day[i]="sixth";
			break;
		case  7:
			day[i]="seventh";
			break;
		case  8:
			day[i]="eighth";
			break;
		case  9:
			day[i]="ninth";
			break;
		case  10:
			day[i]="tenth";
			break;
		case  11:
			day[i]="eleventh";
			break;
		case  12:
			day[i]="twelfth";
			break;
		}



switch (i){
		case  12:
			gift[i]="Twelve drummers drumming, ";
		case  11:
			gift[i]+="Eleven pipers piping, ";
		case  10:
			gift[i]+="Ten lords a-leaping, ";
		case  9:
			gift[i]+="Nine ladies dancing, ";
		case  8:
			gift[i]+="Eight maids a-milking, ";
		case  7:
			gift[i]+="Seven swans a-swimming, ";
		case  6:
			gift[i]+="Six geese a-laying, ";
		case  5:
			gift[i]+="Five golden rings, ";
		case  4:
			gift[i]+="Four calling birds, ";
		case  3:
			gift[i]+="Three French hens, ";
		case  2:
			gift[i]+="Two turtle doves, ";
		case  1:
			if(i!=1 &&i!=12)
			gift[i-1]+="And A partridge in a pear tree.";
			else if(i==1)
				gift[i-1]+="A partridge in a pear tree.";
			else
				gift[i-1]+="And A partridge in a pear tree!";
		}
		cout<<"On the "<<day<<"day of Chrismas,my true love sent to me";
    }
