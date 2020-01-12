#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Difference
//  Input       :   integer address, integer
//  Output      :   integer
//  Description :   return difference between largest number and smallest number from array
//  Author      :   Nikhil
//  Date        :   03/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[],int iLength)
{
    int iMax=Arr[0],iMin=Arr[0],iCnt=0;
    for(iCnt=1;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return (iMax-iMin);
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
    iRet=Difference(p,iSize);
    printf("Difference is %d",iRet);
    free(p);
    return 0;                       // return to operating system
}

