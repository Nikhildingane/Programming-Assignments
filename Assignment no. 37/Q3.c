#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrWrdRev
//  Input       :   character address
//  Output      :   none
//  Description :   reverse words in string in place
//  Author      :   Nikhil
//  Date        :   25/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrWrdRev(char *str)
{
    char *start=NULL,*end=NULL,ch;
    if(str==NULL)
    {
        return;
    }

    start=str;
    end=str;

    while(*(str+1)!='\0')
    {
        if(*str!=' ')
        {
            while((*str!=' ')&&(*str!='\0'))
            {
                str++;
            }
            end=str-1;
            while(start<end)
            {
                ch=*start;
                *start=*end;
                *end=ch;

                start++;
                end--;
            }
            start=str+1;
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
    StrWrdRev(Arr);
    printf("String is :\n%s",Arr);
    return 0;                       // return to operating system
}



