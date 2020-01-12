#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   RangeDisplay
//  Input       :   integer,integer
//  Output      :   none
//  Description :   print numbers between given range
//  Author      :   Nikhil
//  Date        :   18/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart,int iEnd)
{
    if(iEnd<iStart)
    {
        printf("Invalid range");
        return;
    }
    for(;iStart<=iEnd;iStart++)
    {
        printf("%d\t",iStart);
    }
}

//Entry point function : main()
int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter starting point:\n");
    scanf("%d",&iValue1);
    printf("Enter ending point:\n");
    scanf("%d",&iValue2);
    RangeDisplay(iValue1,iValue2);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

