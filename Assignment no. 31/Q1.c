#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrCpyRev
//  Input       :   character address,character address
//  Output      :   none
//  Description :   copy one string into another string in reverse manner
//  Author      :   Nikhil
//  Date        :   17/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyRev(char *src,char *dest)
{
    char *p=NULL;
    if((NULL==src)&&(NULL==dest))
    {
        return;
    }
    p=src;
    while(*(p+1)!='\0')
    {
        p++;
    }
    while(p>=src)
    {
        *dest=*p;
        p--;
        dest++;
    }
    *dest='\0';
}

//Entry point function : main()
int main()
{
    char arr[20]={'\0'};
    char brr[20]={'\0'};
    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);
    StrCpyRev(arr,brr);
    printf("Copied string is :\n%s",brr);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

