#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   FactRev
//  Input       :   integer
//  Output      :   None
//  Description :   print factors in reverse order
//  Author      :   Nikhil
//  Date        :   10/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void FactRev(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=(iNo/2);iCnt>0;iCnt--)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter the number=\n");
    scanf("%d",&iValue);
    FactRev(iValue);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

