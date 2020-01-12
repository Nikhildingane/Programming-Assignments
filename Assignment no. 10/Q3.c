#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   KMtoMeter
//  Input       :   int
//  Output      :   int
//  Description :   convert kilometers into meters
//  Author      :   Nikhil
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int KMtoMeters(int iNo)
{
    if(iNo<0)
    {
        return 0;
    }
    return (iNo*1000);
}
//Entry point function : main()
int main()
{
    int iValue=0,iRet=0;
    printf("Enter distance:\n");
    scanf("%d",&iValue);
    iRet=KMtoMeters(iValue);
    printf("%d KM = %d mtrs",iValue,iRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
