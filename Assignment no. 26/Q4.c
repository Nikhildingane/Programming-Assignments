#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Display
//  Input       :   character
//  Output      :   boolean
//  Description :   check weather character is special character or not
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    if((ch=='!') || (ch=='@') || (ch=='#') || (ch=='$') || (ch=='%') || (ch=='^') || (ch=='&') || (ch=='*'))
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
    printf("Enter character:\n");
    scanf("%c",&cValue);
    bRet=ChkSpecial(cValue);
    if(bRet==TRUE)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not a special character");
    }
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                     // return to operating system
}
