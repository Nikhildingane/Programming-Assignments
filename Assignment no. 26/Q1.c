#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   DisplayASCII
//  Input       :   none
//  Output      :   none
//  Description :   print ascii table from 0-255
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int iCnt=0;
    for(iCnt=0;iCnt<=255;iCnt++)
    {
        printf("%c\t%d\t%x\t%o\n",iCnt,iCnt,iCnt,iCnt);
    }
}
//Entry point function : main()
int main()
{
    DisplayASCII();
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

