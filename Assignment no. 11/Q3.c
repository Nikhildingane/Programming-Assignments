#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   RangeSum
//  Input       :   integer,integer
//  Output      :   integer
//  Description :   Calculate sum of numbers between given range
//  Author      :   Nikhil
//  Date        :   18/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart,int iEnd)
{
    int iSum=0;
    if ((iEnd<iStart) || (iStart<0) || (iEnd<0))
    {
        return iSum;
    }
    for(;iStart<=iEnd;iStart++)
    {
        iSum=iSum+iStart;
    }
    return iSum;
}

//Entry point function : main()
int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    printf("Enter starting point:\n");
    scanf("%d",&iValue1);
    printf("Enter ending point:\n");
    scanf("%d",&iValue2);
    iRet=RangeSum(iValue1,iValue2);
    if(iRet==0)
    {
        printf("Invalid range");
    }
    else
    {
        printf("Sum = %d",iRet);
    }
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}


