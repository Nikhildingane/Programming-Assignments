#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrNCatX
//  Input       :   character address,character address
//  Output      :   none
//  Description :   concat number of first n character from second string to first string
//  Author      :   Nikhil
//  Date        :   25/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrNCatX(char *src,char *dest,int iCnt)
{
    if((src==NULL)||(dest==NULL))
    {
        return;
    }
    while(*src!='\0')
    {
        src++;
    }
    *src=' ';
    while((*dest!='\0')&&(iCnt>0))
    {
        *src=*dest;
        dest++;
        src++;
        iCnt--;
    }
}

int main()
{
    char Arr[50]="Marvelous Infosystems";
    char Brr[30]="Logic Building";
    int iValue=0;
    printf("Enter the number of character:\n");
    scanf("%d",&iValue);
    StrNCatX(Arr,Brr,iValue);
    printf("%s",Arr);
    return 0;
}

