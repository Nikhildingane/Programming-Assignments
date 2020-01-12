#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrNCpyX
//  Input       :   character address, character address, integer
//  Output      :   none
//  Description :   copy one string from another up to n characters
//  Author      :   Nikhil
//  Date        :   15/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrNCpyX(char *src,char *dest,int iCnt)
{
    if(src==NULL)
    {
        return;
    }
    while((*src!='\0')&&(iCnt!=0))
    {
        *dest=*src;
        src++;
        dest++;
        iCnt--;
    }

    *dest='\0';
}

//Entry point function : main()

int main()
{
    char arr[30]={'\0'};
    char brr[30]={'\0'};
    int iNo=0;
    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);
    printf("Enter number of characters to be copied:\n");
    scanf("%d",&iNo);
    StrNCpyX(arr,brr,iNo);
    printf("%s",brr);
    return 0;                       // return to operating system
}

