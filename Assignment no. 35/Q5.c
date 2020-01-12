#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   ToggleBitRange
//  Input       :   unsigned integer,integer,integer
//  Output      :   unsigned integer
//  Description :   toggle bits of number in between given range
//  Author      :   Nikhil
//  Date        :   22/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT ToggleBitRange(UINT iNo,int iStart,int iEnd)
{
    UINT iMask1=1,iMask=0;
    if((iStart<1)||(iStart>32)||(iEnd<1)||(iEnd>32)||(iStart>iEnd))
    {
        return FALSE;
    }
    while(iStart<=iEnd)
    {
        iMask=iMask|(iMask1<<(iStart-1));
        iStart++;
    }
    return (iNo^iMask);
}

//Entry point function : main()
int main()
{
    int iValue=0,iStart=0,iEnd=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    printf("Enter two positions:\n");
    scanf("%d%d",&iStart,&iEnd);
    printf("Modified number is :\n%d",ToggleBitRange(iValue,iStart,iEnd));
    return 0;                       // return to operating system
}

