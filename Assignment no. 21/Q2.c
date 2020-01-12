#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Display
//  Input       :   integer address,integer
//  Output      :   none
//  Description :   display the number from array which are divisible by 5
//  Author      :   Nikhil
//  Date        :   02/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int Arr[],int iLength)
{
    int iEven=0,iOdd=0,iCnt=0;
    if((NULL==Arr) || (iLength<=0))
    {
        return 0;
    }
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%5)==0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

//Entry point function

void main()
{
    int iSize=0,iCnt=0;
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
    Display(p,iSize);
    free(p);
    return 0;
}
