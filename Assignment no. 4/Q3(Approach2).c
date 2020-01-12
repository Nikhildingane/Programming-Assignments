#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   SchoolFees
//  Input       :   integer
//  Output      :   integer
//  Description :   Calculate standard wise fees
//  Author      :   Nikhil
//  Date        :   08/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SchoolFees(int iStandard)
{
  switch (iStandard)
  {
  case 1:
    return 8900;
  case 2:
    return 12790;
  case 3:
    return 21000;
  case 4:
    return 23450;
  default:
    return 0;
  }
}
//Entry point function : main()
int main()
{
    int iStandard=0;
    int iRet=0;
    printf("Enter standard :\n");
    scanf("%d",&iStandard);
    iRet=SchoolFees(iStandard);
    if(iRet!=0)
    {
        printf("Fee amount is :\n%d",iRet);
    }
    else
    {
        printf("Wrong input");
    }
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

