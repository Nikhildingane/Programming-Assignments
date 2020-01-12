#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrCpyX
//  Input       :   character address, character address
//  Output      :   none
//  Description :   copy one string from another
//  Author      :   Nikhil
//  Date        :   15/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyX(char *src,char *dest)
{
    if(src==NULL)
    {
        return;
    }
    while(*src!='\0')
    {
        *dest=*src;
        src++;
        dest++;
    }
    *dest='\0';
}

//Entry point function : main()

int main()
{
    char arr[30]={'\0'};
    char brr[30]={'\0'};
    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);
    StrCpyX(arr,brr);
    printf("%s",brr);
    return 0;                       // return to operating system
}
