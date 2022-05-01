/*
  File:T7_23
  Name:Yuzhuo Wang
  E-mail:861157399@qq.com
  Date:Mar 1th,2022
  Function:T7_23
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>
using namespace std;
int timess[1000];
int time1 = 0;
int times = 0;
void check(int [8][8],const int[],const int[],int&,int&);
void moves(int [8][8],int [],int [],int,int&,int&);
int main()
{
    srand(time(0));
    int board[8][8] = {0};
    const int horizontal[8] = {2,1,-1,-2,-2,-1,1,2};
    const int vertical[8] = {-1,-2,-2,-1,1,2,2,1};
    int currentRow =rand()%8;
    int currentColumn =rand()%8;
    int counter = 0;;
    board[currentRow][currentColumn] =1;
    for(int m=0; m<10000; m++)
    {
        for(int n=0; n<10000000; n++)
        {
            check(board,horizontal,vertical,currentRow,currentColumn);
        }
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
        for(int p=0; p<8; p++)
        {
            for(int q=0; q<8; q++)
            {
                board[p][q]=0;
            }
        }
        currentRow =rand()%8;
        currentColumn =rand()%8;


        board[currentRow][currentColumn] =1;
        times = 0;
        time1++;
    }
    cout<<endl<<endl;
    sort(timess,timess+1000);
    cout<<timess[999];
    return 0;
}
void check(int board[8][8],const int horizontal[],const int vertical[],int&currentRow,int&currentColumn)
{
    int currentrow;
    int currentcolumn;
    int usefulrow[8]= {0};
    int usefulcolumn[8]= {0};
    int rcsize =0;
    bool flag;

    for(int i=0; i<8; i++)
    {
        flag = true;

        if(horizontal[i]<0)
        {
            currentcolumn = -1;
        }
        else
        {
            currentcolumn = 1;
        }
        if(vertical[i]<0)
        {
            currentrow = -1;
        }
        else
        {
            currentrow = 1;
        }

        if((currentColumn+horizontal[i]<0)||(currentColumn+horizontal[i]>7))
        {
            flag = false;
            continue;
        }
        while(fabs(currentcolumn)!=(fabs(horizontal[i])+1))
        {
            if(board[currentRow][currentColumn+currentcolumn]!=0)
            {


                flag = false;
                break;
            }
            if(horizontal[i]<0)
            {
                currentcolumn--;
            }
            else
            {
                currentcolumn++;
            }
        }
        if(horizontal[i]<0)
        {
            currentcolumn++;
        }
        else
        {
            currentcolumn--;
        }

        if(!flag)
        {
            continue;
        }
        while(fabs(currentrow)!=(fabs(vertical[i])+1))
        {


            if((currentRow+vertical[i]<0)||(currentRow+vertical[i]>7))
            {


                flag = false;
                break;
            }
            if(board[currentRow+currentrow][currentColumn]!=0)
            {
                flag = false;
            }
            if(vertical[i]<0)
            {
                currentrow--;
            }
            else
            {
                currentrow++;
            }


        }
        if(vertical[i]<0)
        {
            currentrow++;
        }
        else if(vertical[i]>0)
        {
            currentrow--;
        }
        if(flag)
        {
            usefulrow[rcsize] = vertical[i];
            usefulcolumn[rcsize] = horizontal[i];
            rcsize++;
        }
    }
    if(rcsize!=0)
    {
        moves(board,usefulrow,usefulcolumn,rcsize,currentRow,currentColumn);
    }
    else
    {
        return;
    }
}
void moves(int board[8][8],int usefulrow[],int usefulcolumn[],int rcsize,int&currentRow,int&currentColumn)
{
    times++;
    timess[time1] = times;
    srand(time(0));
    int nums = rand()%rcsize;
    int row = usefulrow[nums];
    int column = usefulcolumn[nums];
    int counterrow;
    int countercolumn;
    if(row>0)
    {
        counterrow = 1;
    }
    else
    {
        counterrow = -1;
    }
    if(column>0)
    {
        countercolumn = 1;
    }
    else
    {
        countercolumn = -1;
    }
    while(fabs(countercolumn)!=(fabs(column)+1))
    {
        board[currentRow][currentColumn+countercolumn] = 1;
        if(column>0)
        {
            countercolumn++;
        }
        else
        {
            countercolumn--;
        }


    }
    currentColumn+=column;
    while(fabs(counterrow)!=(fabs(row)+1))
    {
        board[currentRow+counterrow][currentColumn] = 1;
        if(row>0)
        {
            counterrow++;
        }
        else
        {
            counterrow--;
        }
    }
    currentRow+=row;
}
