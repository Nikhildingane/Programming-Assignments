#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   ChkVowel
//  Input       :   character
//  Output      :   boolean
//  Description :   check weather the character is vowel or not
//  Author      :   Nikhil
//  Date        :   06/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char cValue)
{
    if( (cValue=='a') || (cValue=='A') || (cValue=='e') || (cValue=='E') || (cValue=='o') || (cValue=='O') || (cValue=='i') || (cValue=='I') || (cValue=='u') || (cValue=='U'))
    {
        return TRUE;                    //return to caller function : main()
    }
    else
    {
        return FALSE;                  //return to caller function : main()
    }
}

//Entry point function : main()
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;
    printf("Enter character:\n");
    scanf("%c",&cValue);
    bRet=ChkVowel(cValue);             //function call
    if(bRet==TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not a vowel");
    }
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

