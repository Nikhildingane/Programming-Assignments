#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Check
//  Input       :   integer address,integer,integer
//  Output      :   boolean
//  Description :   Check weather number is present in given array
//  Author      :   Nikhil
//  Date        :   03/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    if((NULL==Arr) || (iLength<=0))
    {
        return FALSE;
    }
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(iCnt==iLength)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

//Entry point function

void main()
{
    int iSize=0,iCnt=0,iValue=0;
    BOOL iRet=FALSE;
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
    iRet=Check(p,iSize,iValue);
    if(iRet==TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    free(p);
    return 0;
}


