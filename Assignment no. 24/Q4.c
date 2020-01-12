#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   CheckDigit
//  Input       :   integer
//  Output      :   boolean
//  Description :   check weather number is 3 digit or not
//  Author      :   Nikhil
//  Date        :   03/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckDigit(int iNo)
{
    int iCnt=0;
    if(iNo==0)
    {
        return FALSE;
    }
    while((iNo!=0) && (iCnt<=4))
    {
        iNo=iNo/10;
        iCnt++;
    }
    if(iCnt==3)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Digits
//  Input       :   integer address, integer
//  Output      :   none
//  Description :   display 3 digits number from array
//  Author      :   Nikhil
//  Date        :   03/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[],int iLength)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(CheckDigit(Arr[iCnt]))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

//Entry point function : main()
int main()
{
    int iSize=0,iCnt=0,iRet=0;
    int *p=NULL;
    printf("Enter number of elements:\n");
    scanf("%d",&iSize);
    p=(int *)malloc(iSize*sizeof(int));
    if(NULL==p)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element : %d:\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Digits(p,iSize);
    free(p);
    return 0;                       // return to operating system
}


