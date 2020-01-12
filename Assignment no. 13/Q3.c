
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   CountRange
//  Input       :   integer
//  Output      :   integer
//  Description :   return frequency count of digits less than 3 and greater than 7
//  Author      :   Nikhil
//  Date        :   19/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        if(((iNo%10)>3) && ((iNo%10)<7))
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
    iRet=CountRange(iValue);
    printf("%d",iRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}



