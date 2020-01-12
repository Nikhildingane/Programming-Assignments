#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Frequency
//  Input       :   integer address,integer
//  Output      :   int
//  Description :   return difference even frequency and odd frequency
//  Author      :   Nikhil
//  Date        :   02/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[],int iLength)
{
    int iEven=0,iOdd=0,iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }
    return (iEven-iOdd);
}

//Entry point function

void main()
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
    iRet=Frequency(p,iSize);
    printf("Difference is : %d",iRet);
    free(p);
    return 0;
}


