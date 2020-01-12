#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Multiply
//  Input       :   integer, integer, integer
//  Output      :   int
//  Description :   Multiply three numbers
//  Author      :   Nikhil
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1,int iNo2,int iNo3)
{
    if((iNo1==0) && (iNo2==0) && (iNo3==0))
    {
        return 0.0;
    }
    if(iNo1==0)
    {
        iNo1=1;
    }
    if(iNo2==0)
    {
        iNo2=1;
    }
    if(iNo3==0)
    {
        iNo3=1;
    }
    return (iNo1*iNo2*iNo3);
}

//Entry point function : main()

int main()
{
    int iValue1=0,iValue2=0,iValue3=0;
    int iRet=0;
    printf("Please enter three numbers:\n");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);
    iRet=Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication : %d",iRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}


