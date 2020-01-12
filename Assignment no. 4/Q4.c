#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   TouristBill
//  Input       :   integer
//  Output      :   integer
//  Description :   Calculate estimated car rent
//  Author      :   Nikhil
//  Date        :   08/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int TouristBill(int iKilometer)
{
    if(iKilometer<=0)
    {
        return 0;
    }
    else if(iKilometer<100)
    {
        return (iKilometer*25);
    }
    else if(iKilometer>=100)
    {
        return (2500+((iKilometer-100)*15));
    }

}
//Entry point function : main()
int main()
{
    int iKilometer=0;
    int iRet=0;
    printf("Enter kilometers :\n");
    scanf("%d",&iKilometer);
    iRet=TouristBill(iKilometer);
    printf("Estimated rent is :\n%d",iRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}


