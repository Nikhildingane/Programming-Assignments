#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   RangeDisplayRev
//  Input       :   integer,integer
//  Output      :   none
//  Description :   print numbers between given range in reverse order
//  Author      :   Nikhil
//  Date        :   18/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart,int iEnd)
{
    if(iEnd<iStart)
    {
        printf("Invalid range");
        return;
    }
    for(;iEnd>=iStart;iEnd--)
    {
        printf("%d\t",iEnd);
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
    RangeDisplayRev(iValue1,iValue2);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}


