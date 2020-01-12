#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   OddDisplay
//  Input       :   integer
//  Output      :   None
//  Description :   print odd numbers up to N
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iNum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    iNum=(iNo%10);
    int iCnt=0;
    iNo=iNo/10;
    if(iNum<0)
    {
        iNum=-iNum;
    }
    while(iNo!=0)
    {
        iNum=iNum-(iNo%10);
        iNo=iNo/10;
    }

    for(iCnt=1;iCnt<(iNum*2);iCnt=iCnt+2)
    {
        printf("%d\t",iCnt);
    }
}

//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    Pattern(iValue);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

