
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Count
//  Input       :   integer
//  Output      :   integer
//  Description :   return frequency digits less than 6
//  Author      :   Nikhil
//  Date        :   19/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        if((iNo%10)<6)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}

//Entry point function : main()

int main()
{
    int iValue=0,iRet=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    iRet=Count(iValue);
    printf("%d",iRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}


