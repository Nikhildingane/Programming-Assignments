#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrCpySmall
//  Input       :   character address, character address
//  Output      :   none
//  Description :   copy only small character to string from another string
//  Author      :   Nikhil
//  Date        :   15/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpySmall(char *src,char *dest)
{
    if(src==NULL)
    {
        return;
    }
    while(*src!='\0')
    {
        if(((*src>='a')&&(*src<='z')) || (*src==' '))
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
    StrCpySmall(arr,brr);
    printf("%s",brr);
    return 0;                       // return to operating system
}


