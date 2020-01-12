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
    int temp1=iNo,i=0;
    while(iNo!=0)
    {
        i=1;
        while(i<=(iNo%10))
        {
            printf("*\t");
            i++;
        }
        printf("\n");
        iNo=iNo/10;
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




