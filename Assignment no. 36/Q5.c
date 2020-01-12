#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrCmpX
//  Input       :   character address,character address integer
//  Output      :   boolean
//  Description :   check weather string is pallindrome or not(case insensetive)
//  Author      :   Nikhil
//  Date        :   25/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL StrCmpX(char *str)
{
    char *end=str;

    while(*(end+1)!='\0')
    {
        end++;
    }
    while((str<end)&&((*str==*end)||((*str+32)==*end)||((*str-32)==*end)))
    {
        str++;
        end--;
    }
    if(str>=end)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char Arr[50]={'\0'};
    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    if(StrCmpX(Arr)==TRUE)
    {
        printf("String is pallindrome");
    }
    else
    {
        printf("String is not pallindrome");
    }

    return 0;
}



