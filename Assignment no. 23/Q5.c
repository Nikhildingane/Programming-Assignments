#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Product
//  Input       :   integer address,integer,integer
//  Output      :   integer
//  Description :   Return first occurance of number from array
//  Author      :   Nikhil
//  Date        :   03/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Product(int Arr[],int iLength)
{
    int iCnt=0,iMult=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)!=0)
        {
            if(iMult==0)
            {
                iMult=1;
            }
            iMult=iMult*Arr[iCnt];
        }
    }
    return iMult;
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
    iRet=Product(p,iSize);
    printf("Product is %d",iRet);
    free(p);
    return 0;
}




