#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   FactDiff
//  Input       :   integer
//  Output      :   integer
//  Description :   calculate difference between sum of factors and sum of non factors
//  Author      :   Nikhil
//  Date        :   10/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int FactDiff(int iNo)
{
    int iCnt=0;
    int iFactSum=0;
    int iNonFactSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {

            iFactSum=iFactSum+iCnt;
        }
        else
        {
            iNonFactSum=iNonFactSum+iCnt;
        }
    }
    return (iFactSum-iNonFactSum);
}
//Entry point function : main()
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number=\n");
    scanf("%d",&iValue);
    iRet=FactDiff(iValue);
    printf("%d",iRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

