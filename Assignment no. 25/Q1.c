#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   ChkAlpha
//  Input       :   character
//  Output      :   boolean
//  Description :   check weather character or not
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkAlpha(char ch)
{
    if(( (ch>='A') && (ch<='Z') ) || ((ch>='a') && (ch<='z') ))
    {
        return TRUE;
    }
    return FALSE;
}
//Entry point function : main()
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;
    printf("Enter the character:\n");
    scanf("%c",&cValue);
    bRet=ChkAlpha(cValue);
    if(bRet==TRUE)
    {
        printf("It is character");
    }
    else
    {
        printf("It is not a character");
    }
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

