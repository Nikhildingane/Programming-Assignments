#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   ChkBit
//  Input       :   unsigned integer,integer,integer
//  Output      :   boolean
//  Description :   check weather n th or m th bit is on or off
//  Author      :   Nikhil
//  Date        :   22/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UINT iNo,int pos1,int pos2)
{
    UINT iMask=1;
    if((pos1<1)||(pos1>32)||(pos2<1)||(pos2>32))
    {
        return FALSE;
    }
    if(((iNo&(iMask<<(pos1-1)))==(iMask<<(pos1-1))) || ((iNo&(iMask<<(pos2-1)))==(iMask<<(pos2-1))))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//Entry point function : main()
int main()
{
    int iValue=0,pos1=0,pos2=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    printf("Enter two positions:\n");
    scanf("%d%d",&pos1,&pos2);
    if(ChkBit(iValue,pos1,pos2)==TRUE)
    {
        printf("Bit is on");
    }
    else
    {
        printf("Bit is off");
    }
    return 0;                       // return to operating system
}

