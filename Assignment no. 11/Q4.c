#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   RangeSumEven
//  Input       :   integer,integer
//  Output      :   integer
//  Description :   Calculate sum of even numbers between given range
//  Author      :   Nikhil
//  Date        :   18/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart,int iEnd)
{
    int iSumEven=0;
    if ((iEnd<iStart) || (iStart<0) || (iEnd<0))
    {
        return iSumEven;
    }
    for(;iStart<=iEnd;iStart++)
    {
        if((iStart%2)==0)
        {
           iSumEven=iSumEven+iStart;
        }
    }
    return iSumEven;
}

//Entry point function : main()
int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    printf("Enter starting point:\n");
    scanf("%d",&iValue1);
    printf("Enter ending point:\n");
    scanf("%d",&iValue2);
    iRet=RangeSumEven(iValue1,iValue2);
    if(iRet==0)
    {
        printf("Invalid range");
    }
    else
    {
        printf("Sum of even numbers = %d",iRet);
    }
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}



