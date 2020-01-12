#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALAE 0

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrCmpX
//  Input       :   character address,character address integer
//  Output      :   boolean
//  Description :   check weather two strings are equal or not
//  Author      :   Nikhil
//  Date        :   25/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL StrCmpX(char *src,char *dest)
{
    if((src==NULL)||(dest==NULL))
    {
        return;
    }
    while((*src!='\0')&&(*dest!='\0'))
    {
        if(*src!=*dest)
        {
            break;
        }
        src++;
        dest++;
    }
    if((*src=='\0')&&(*dest=='\0'))
    {
        return TRUE;
    }
    else
    {
        return FALAE;
    }
}

int main()
{
    char Arr[50]="Marvelous Infosystems";
    char Brr[30]="Marvelous Infosystems";

    printf("Enter first string:\n");
    scanf("%[^'\n']s",Arr);
    fflush(stdin);
    printf("Enter second string:\n");
    scanf("%[^'\n']s",Brr);

    if(StrCmpX(Arr,Brr)==TRUE)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("Both strings are not equal");
    }

    return 0;
}


