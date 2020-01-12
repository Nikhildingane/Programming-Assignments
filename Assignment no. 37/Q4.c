#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrCpyX
//  Input       :   character address,character address
//  Output      :   none
//  Description :   copy one string into another string by removing extra while spaces
//  Author      :   Nikhil
//  Date        :   25/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyX(char *src,char *dest)
{
    if((src==NULL)||(dest==NULL))
    {
        return;
    }
    while(*src!='\0')
    {
        if(*src!=' ')
        {
            while((*src!=' ')&&(*src!='\0'))
            {
                *dest=*src;
                dest++;
                src++;
            }
            *dest=' ';
            dest++;
        }
        src++;
    }
    *dest='\0';
}

//Entry point function : main()
int main()
{
    char Arr[50]={'\0'};
    char Brr[50]={'\0'};
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
    StrCpyX(Arr,Brr);
    printf("String is :\n%s",Brr);
    return 0;                       // return to operating system
}




