#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrCpyRev
//  Input       :   character address,character address
//  Output      :   none
//  Description :   copy one string into another string by removing white spaces
//  Author      :   Nikhil
//  Date        :   17/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrTrimCpy(char *src,char *dest)
{
    char *End=NULL;
    if((src==NULL) || (dest==NULL))
    {
        return;
    }
    while(*src!='\0')
    {
        if(*src!=' ')
        {
            *dest=*src;
            dest++;
        }
        src++;
    }
    *dest='\0';
}
int main()
{
    char *arr[20]={'\0'};
    char *brr[20]={'\0'};
    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);
    StrTrimCpy(arr,brr);
    printf("Copied string is:\n%s",brr);
    return 0;
}


