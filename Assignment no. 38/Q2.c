#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Pattern
//  Input       :   character address
//  Output      :   none
//  Description :   print pattern
//  Author      :   Nikhil
//  Date        :   26/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(char *str)
{
    char *temp1=NULL,*temp2=NULL,*temp3=NULL;
    if(str==NULL)
    {
        return;
    }
    temp1=str;
    temp2=str;
    while(*(temp1+1)!='\0')
    {
        temp1++;
    }
    while(*temp2!='\0')
    {
        temp3=str;
        while(temp3<=temp1)
        {
            printf("%c\t",*temp3);
            temp3++;
        }
        printf("\n");
        temp1--;
        temp2++;
    }
}

//Entry point function : main()
int main()
{
    char Arr[30]={'\0'};
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
    Pattern(Arr);
    return 0;                       // return to operating system
}


