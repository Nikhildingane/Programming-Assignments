#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrCpyToggle
//  Input       :   character address,character address
//  Output      :   none
//  Description :   copy one string into another string by toggling character cases
//  Author      :   Nikhil
//  Date        :   17/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyToggle(char *src,char *dest)
{
    if((src==NULL) || (dest==NULL))
    {
        return;
    }
    while(*src!='\0')
    {
        if((*src>='a')&&(*src<='z'))
        {
            *dest=*src-32;
        }
        else if((*src>='A')&&(*src<='Z'))
        {
            *dest=*src+32;
        }
        else
        {
            *dest=*src;
        }
        dest++;
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
    StrCpyToggle(arr,brr);
    printf("Copied string is:\n%s",brr);
    return 0;
}




