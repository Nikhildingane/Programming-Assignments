#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrCmpCX
//  Input       :   character address,character address
//  Output      :   boolean
//  Description :   check weather two strings are equal or not without considering characters case
//  Author      :   Nikhil
//  Date        :   26/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL StrCmpCX(char *str1,char *str2)
{
    if((str1==NULL)||(str2==NULL))
    {
        return;
    }
    while((*str1!='\0')&&(*str2!='\0')&&((*str1=*str2)||((*str1+32)==*str2)||((*str1-32)==*str2)))
    {
        str1++;
        str2++;
    }
    if((*str1=='\0')&&(*str2=='\0'))
    {
        return TRUE;
    }
    return FALSE;
}

//Entry point function : main()
int main()
{
    char Arr[30]={'\0'};
    char Brr[30]={'\0'};
    printf("Enter first string :\n");
    scanf("%[^'\n']s",Arr);
    fflush(stdin);
    printf("Enter second string :\n");
    scanf("%[^'\n']s",Brr);
    if(StrCmpCX(Arr,Brr)==TRUE)
    {
        printf("Both the strings are equal");
    }
    else
    {
        printf("strings are not equal");
    }
    return 0;                       // return to operating system
}



