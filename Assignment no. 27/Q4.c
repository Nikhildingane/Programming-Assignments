#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   ChkVowels
//  Input       :   character address
//  Output      :   boolean
//  Description :   check weather string contains vowel or not
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkVowels(char *str)
{
    if(NULL==str)
    {
        return FALSE;
    }
    while(*str!=0)
    {
        if((*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u') || (*str=='A') || (*str=='E') || (*str=='I') || (*str=='O') || (*str=='U'))
        {
            break;
        }
        str++;
    }
    if(*str=='\0')
    {
        return FALSE;
    }
    return TRUE;
}

//Entry point function : main()
int main()
{
    char arr[20];
    BOOL bRet=0;
    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);
    bRet=ChkVowels(arr);
    if(bRet==TRUE)
    {
        printf("String contains vowels");
    }
    else
    {
        printf("String does not contains vowels");
    }
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
