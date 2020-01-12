#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrCatX
//  Input       :   character address, character address
//  Output      :   none
//  Description :   concat second string after first string
//  Author      :   Nikhil
//  Date        :   15/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCatX(char *src,char *dest)
{
    if(src==NULL)
    {
        return;
    }
    while(*src!='\0')
    {
        src++;
    }
    *src=' ';
    src++;
    while(*dest!='\0')
    {
        *src=*dest;
        dest++;
        src++;
    }
    *src='\0';
}

//Entry point function : main()

int main()
{
    char arr[60]={'\0'};
    char brr[30]={'\0'};
    printf("Enter the first string:\n");
    scanf("%[^'\n']s",arr);
    fflush(stdin);
    printf("Enter the second string:\n");
    scanf("%[^'\n']s",brr);
    StrCatX(arr,brr);
    printf("%s",arr);
    return 0;                       // return to operating system
}


