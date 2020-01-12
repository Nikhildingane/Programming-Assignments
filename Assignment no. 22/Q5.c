#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Freuency
//  Input       :   integer address,integer
//  Output      :   integer
//  Description :   return frequency of number in given array
//  Author      :   Nikhil
//  Date        :   03/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Freuency(int Arr[],int iLength,int iNo)
{
    int iFreq=0,iCnt=0;
    if((NULL==Arr) || (iLength<=0))
    {
        return -1;
    }
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFreq++;
        }
    }
    return iFreq;
}

//Entry point function

void main()
{
    int iSize=0,iCnt=0,iRet=0,iValue=0;
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
    printf("Enter number:\n");
    scanf("%d",&iValue);
    iRet=Freuency(p,iSize,iValue);
    printf("Frequency of %d is : %d",iValue,iRet);
    free(p);
    return 0;
}

