#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrCap
//  Input       :   character address
//  Output      :   none
//  Description :   set first character of each word to capital case
//  Author      :   Nikhil
//  Date        :   25/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCap(char *str)
{
    if(str==NULL)
    {
        return;
    }
    while(*str!='\0')
    {
        if(*str!=' ')
        {
            if((*str>='a')&&(*str<='z'))
            {
                *str=*str-32;
            }
            while((*(str+1)!=' ')&&(*(str+1)!='\0'))
            {
                str++;
            }
        }
        str++;
    }
}

//Entry point function : main()
int main()
{
    char Arr[50]={'\0'};
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
    StrCap(Arr);
    printf("String is :\n%s",Arr);
    return 0;                       // return to operating system
}




