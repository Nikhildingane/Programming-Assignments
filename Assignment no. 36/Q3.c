#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALAE 0

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrNCmpX
//  Input       :   character address,character address, integer
//  Output      :   boolean
//  Description :   check weather first n characters of two strings are equal or not
//  Author      :   Nikhil
//  Date        :   25/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL StrCmpX(char *src,char *dest,int iCnt)
{
    if((src==NULL)||(dest==NULL))
    {
        return;
    }
    while((*src!='\0')&&(*dest!='\0')&&(iCnt>=0))
    {
        if(*src!=*dest)
        {
            break;
        }
        src++;
        dest++;
        iCnt--;
    }
    if(iCnt==-1)
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
    int iValue=0;

    printf("Enter first string:\n");
    scanf("%[^'\n']s",Arr);
    fflush(stdin);
    printf("Enter second string:\n");
    scanf("%[^'\n']s",Brr);
    printf("Enter number:\n");
    scanf("%d",&iValue);
    if(StrCmpX(Arr,Brr,iValue)==TRUE)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("Both strings are not equal");
    }

    return 0;
}



