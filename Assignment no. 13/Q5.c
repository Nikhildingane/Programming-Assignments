
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   CountDiff
//  Input       :   integer
//  Output      :   integer
//  Description :   return th difference between sum of even and odd digits of number
//  Author      :   Nikhil
//  Date        :   19/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iSumEven=0,iSumOdd=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        if((iNo%2)==0)
        {
            iSumEven=iSumEven+(iNo%10);
        }
        else
        {
            iSumOdd=iSumOdd+(iNo%10);
        }
        iNo=iNo/10;
    }
    return (iSumEven-iSumOdd);
}

//Entry point function : main()

int main()
{
    int iValue=0,iRet=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    iRet=CountDiff(iValue);
    printf("%d",iRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}



