#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   MultFact
//  Input       :   integer
//  Output      :   integer
//  Description :   calculate multiplication of factors of number
//  Author      :   Nikhil
//  Date        :   10/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int MultFact(int iNo)
{
    int iCnt=0;
    int iMult=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {

            iMult=iMult*iCnt;
        }
    }
    return iMult;
}
//Entry point function : main()
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number=\n");
    scanf("%d",&iValue);
    iRet=MultFact(iValue);
    printf("%d",iRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

