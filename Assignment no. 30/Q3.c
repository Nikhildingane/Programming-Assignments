#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrCpyCap
//  Input       :   character address, character address
//  Output      :   none
//  Description :   copy only capital character to string from another string
//  Author      :   Nikhil
//  Date        :   15/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyCap(char *src,char *dest)
{
    if(src==NULL)
    {
        return;
    }
    while(*src!='\0')
    {
        if((*src>='A')&&(*src<='Z'))
        {
            *dest=*src;
            dest++;
        }
        src++;
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
    StrCpyCap(arr,brr);
    printf("%s",brr);
    return 0;                       // return to operating system
}

