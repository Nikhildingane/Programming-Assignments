#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Difference
//  Input       :   integer address,integer
//  Output      :   integer
//  Description :   Return the difference between sum of even and odd numbers
//  Author      :   Nikhil
//  Date        :   02/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[],int iLength)
{
    int iEven=0,iOdd=0,iCnt=0;
    if((NULL==Arr) || (iLength<=0))
    {
        return 0;
    }
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEven=iEven+Arr[iCnt];
        }
        else
        {
            iOdd=iOdd+Arr[iCnt];
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
    iRet=Difference(p,iSize);
    printf("Difference is : %d",iRet);
    free(p);
    return 0;
}
