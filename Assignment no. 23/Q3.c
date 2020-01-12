#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   LastOcc
//  Input       :   integer address,integer,integer
//  Output      :   integer
//  Description :   Return last occurance of number from array
//  Author      :   Nikhil
//  Date        :   03/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int LastOcc(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    if((NULL==Arr) || (iLength<=0))
    {
        return -2;
    }
    for(iCnt=(iLength-1);iCnt>=0;iCnt--)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(iCnt==iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

//Entry point function

void main()
{
    int iSize=0,iCnt=0,iValue=0,iRet=0;
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
    iRet=LastOcc(p,iSize,iValue);
    printf("Index is %d",iRet);
    free(p);
    return 0;
}




