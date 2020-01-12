#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Range
//  Input       :   integer address,integer,integer
//  Output      :   integer
//  Description :   Return fist occurance of number from array
//  Author      :   Nikhil
//  Date        :   03/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt=0;
    if((NULL==Arr) || (iLength<=0))
    {
        printf("Error");
        return;
    }
    if(iStart>iEnd)
    {
        printf("Invalid range");
    }
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]>=iStart) && (Arr[iCnt]<=iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

//Entry point function

void main()
{
    int iSize=0,iCnt=0,iValue1=0,iValue2=0;
    int *p=NULL;
    printf("Enter number of elements:\n");
    scanf("%d",&iSize);
    p=(int *)malloc(iSize*sizeof(int));
    if(NULL==p)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter the starting point:\n");
    scanf("%d",&iValue1);
    printf("Enter the ending point:\n");
    scanf("%d",&iValue2);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element : %d:\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Range(p,iSize,iValue1,iValue2);
    free(p);
    return 0;
}




