#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Percentage
//  Input       :   integer ,integer
//  Output      :   float
//  Description :   calculate percentage
//  Author      :   Nikhil
//  Date        :   06/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1,int iNo2)
{
    if((iNo1<=0) || (iNo2<=0) || (iNo2>iNo1))
    {
        return 0.0;
    }
    return ((iNo2*100)/iNo1);
}
//Entry point function : main()
int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0;
    printf("Please enter total marks:\n");
    scanf("%d",&iValue1);
    printf("Please enter obtained marks:\n");
    scanf("%d",&iValue2);
    fRet=Percentage(iValue1,iValue2);
    printf("Percentage is = %f",fRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
