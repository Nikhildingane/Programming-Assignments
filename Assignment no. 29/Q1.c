#include<stdio.h>
typedef int BOOL;
#define TRUE 0
#define FALSE 1
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   ChkChar
//  Input       :   character address,character
//  Output      :   boolean
//  Description :   check character from string
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkChar(char *str,char ch)
{
    if(str==NULL)
    {
        return FALSE;
    }
    while(*str!='\0')
    {
        if(*str==ch)
        {
            break;
        }
        str++;
    }
    if(*str=='\0')
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

//Entry point function : main()
int main()
{
    char arr[20];
    char cValue='a';
    BOOL bRet=FALSE;
    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);
    getchar();
    printf("Enter the character:\n");
    scanf("%c",&cValue);
    bRet=ChkChar(arr,cValue);
    if(bRet==TRUE)
    {
        printf("character found");
    }
    else
    {
        printf("character not found");
    }
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

