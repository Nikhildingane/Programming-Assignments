#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrRevTogX
//  Input       :   character address,character address
//  Output      :   none
//  Description :   reverse the string in place by toggling character case
//  Author      :   Nikhil
//  Date        :   25/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrRevTogX(char *src)
{
    if(src==NULL)
    {
        return ;
    }
    char *end=src;
    char ch='\0';

    while(*(end+1)!='\0')
    {
        end++;
    }
    while(src<=end)
    {
        ch=*src;

        if(src<end)
        {
                if((*end>='A')&&(*end<='Z'))
                {
                    *src=*end+32;
                }
                else if((*end>='a')&&(*end<='z'))
                {
                    *src=*end-32;
                }
                else
                {
                    *src=*end;
                }
                if((ch>='A')&&(ch<='Z'))
                {
                    *end=ch+32;
                }
                else if((ch>='a')&&(ch<='z'))
                {
                    *end=ch-32;
                }
                else
                {
                    *end=ch;
                }
        }
        else
        {
            if((*src>='A')&&(*src<='Z'))
                {
                    *src=*src+32;
                }
            else if((*src>='A')&&(*src<='Z'))
            {
                *src=*src-32;
            }
        }
        src++;
        end--;
    }
}

int main()
{
    char Arr[50]={'\0'};
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
    StrRevTogX(Arr);
    printf("%s",Arr);
    return 0;
}


