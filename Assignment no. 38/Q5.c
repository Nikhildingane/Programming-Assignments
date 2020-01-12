#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Pattern1
//  Input       :   character address
//  Output      :   none
//  Description :   print pattern
//  Author      :   Nikhil
//  Date        :   26/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern1(char *str)
{
    char *row=NULL,*col=NULL;
    if(str==NULL)
    {
        return;
    }
    row=str;
    col=str;
    while(*row!='\0')
    {
        col=str;
        while(*col!='\0')
        {
            if((*col>='A')&&(*col<='Z'))
            {
                printf("%c\t",*col+32);
            }
            else
            {
                printf("%c\t",*col);
            }
            col++;
        }
        printf("\n");
        row++;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Pattern2
//  Input       :   character address
//  Output      :   none
//  Description :   print pattern
//  Author      :   Nikhil
//  Date        :   26/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern2(char *str)
{
    char *temp1=NULL,*temp2=NULL;
    if(str==NULL)
    {
        return;
    }
    temp1=str;
    temp2=str;
    while(*temp1!='\0')
    {
        temp2=str;
        while(temp2<=temp1)
        {
            if((*temp2>='A')&&(*temp2<='Z'))
            {
                printf("%c\t",*temp2+32);
            }
            else
            {
                printf("%c\t",*temp2);
            }
            temp2++;
        }
        printf("\n");
        temp1++;
    }
}

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
    char *temp1=NULL;
    int iCnt=1;
    if(str==NULL)
    {
        return;
    }
    temp1=str;
    while(*temp1!='\0')
    {
        temp1++;
        iCnt++;
    }
    if((iCnt%2)==0)
    {
        Pattern1(str);
    }
    else
    {
        Pattern2(str);
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



