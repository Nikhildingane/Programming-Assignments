#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Sum
//  Input       :   integer
//  Output      :   integer
//  Description :   return sum of digits of number
//  Author      :   Nikhil
//  Date        :   03/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Sum(int iNo)
{
    int iSum=0;
    while(iNo!=0)
    {
        iSum=iSum+(iNo%10);
        iNo=iNo/10;
    }
    return iSum;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   SumDigits
//  Input       :   integer address, integer
//  Output      :   none
//  Description :   display sum of digits of each number from array
//  Author      :   Nikhil
//  Date        :   03/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[],int iLength)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       printf("%d\t",Sum(Arr[iCnt]));
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



