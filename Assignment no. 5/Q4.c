#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   SumNonFact
//  Input       :   integer
//  Output      :   None
//  Description :   sum of non factors
//  Author      :   Nikhil
//  Date        :   10/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int SumNonFact(int iNo)
{
    int iCnt=0;
    int iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}
//Entry point function : main()
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number=\n");
    scanf("%d",&iValue);
    iRet=SumNonFact(iValue);
    printf("%d",iRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

