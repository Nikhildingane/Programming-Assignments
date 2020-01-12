#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Pattern
//  Input       :   integer , integer
//  Output      :   none
//  Description :   Display character pattern
//  Author      :   Nikhil
//  Date        :   24/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol)
{
    int iCntR=0,iCntC=0;
    if(iRow<0)
    {
        iRow=-iRow;
    }
    if(iCol<0)
    {
        iCol=-iCol;
    }
    for(iCntR=1;iCntR<=iRow;iCntR++)
    {
        for(iCntC=1;iCntC<=iCol;iCntC++)
        {
            printf("%c\t",(char)(iCntC+64));
        }
        printf("\n");
    }
}
//Entry point function : main()
int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter number of rows and columns:\n");
    scanf("%d%d",&iValue1,&iValue2);
    Pattern(iValue1,iValue2);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}



