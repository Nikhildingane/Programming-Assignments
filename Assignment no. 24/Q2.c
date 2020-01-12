#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Minimum
//  Input       :   integer address, integer
//  Output      :   integer
//  Description :   return smallest number from array
//  Author      :   Nikhil
//  Date        :   03/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Minimum(int Arr[],int iLength)
{
    int iMin=Arr[0],iCnt=0;
    for(iCnt=1;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
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
    iRet=Minimum(p,iSize);
    printf("Largest number is %d",iRet);
    free(p);
    return 0;                       // return to operating system
}


