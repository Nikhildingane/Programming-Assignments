#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Pattern
//  Input       :   integer
//  Output      :   none
//  Description :   display pattern of numbers
//  Author      :   Nikhil
//  Date        :   26/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int temp1=iNo,rev=0,i=0;
    while(temp1!=0)
    {
        rev=(rev*10)+(temp1%10);
        temp1=temp1/10;
    }
    while(rev!=0)
    {
        i=(rev%10);
        printf("%d\t",i);
        while(i>=1)
        {
            printf("#\t");
            i--;
        }
        printf("\n");
        rev=rev/10;
    }
}

//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;                       // return to operating system
}






