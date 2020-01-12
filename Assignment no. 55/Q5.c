//Check weather matrix is sparse matrix or not

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef int BOOL;
#define TRUE 1;
#define FALSE 0;

BOOL ChkSparse(int **Arr,int iRow,int iCol)
{
	int i=0,j=0;
	int iCntZero=0;

	for(i=0;i<iRow;i++)
	{
        for(j=0;j<iCol;j++)
        {
            if(Arr[i][j]==0)
            {
                iCntZero++;
            }
        }
	}
    if(iCntZero>((iRow*iCol)/2))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
	int **p=NULL,iRow=0,iCol=0,i=0,j=0;

	printf("Enter the number of rows:\n");
	scanf("%d",&iRow);

	printf("Enter the number of columns:\n");
	scanf("%d",&iCol);

	p=(int **)malloc(iRow*sizeof(int *));

	for(i=0;i<iRow;i++)
	{
		p[i]=(int *)malloc(iCol*sizeof(int));
	}

	printf("Enter the elements:\n");
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}

	printf("Entered elements are:\n");
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}

    if(ChkSparse(p,iRow,iCol))
    {
        printf("Matrix is sparse matrix");
    }
    else
    {
        printf("Matrix is not a sparse matrix");
    }

	for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }

    free(p);

	return 0;
}



