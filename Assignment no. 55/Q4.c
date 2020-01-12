//Check weather matrix is identity matrix or not

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef int BOOL;
#define TRUE 1;
#define FALSE 0;

BOOL ChkIdentity(int **Arr,int iRow,int iCol)
{
	int i=0,j=0;
    BOOL flag=TRUE;

	if(iRow!=iCol)
    {
        printf("Matrix is not a square matrix");
        return FALSE;
    }

	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
            if((i==j)&&(Arr[i][j]!=1))
            {
                flag=FALSE;
                break;
            }
            else if((i!=j)&&(Arr[i][j]!=0))
            {
                flag=FALSE;
                break;
            }
		}
	}
    return flag;
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

    if(ChkIdentity(p,iRow,iCol))
    {
        printf("Matrix is identity matrix");
    }
    else
    {
        printf("Matrix is not identity matrix");
    }

	for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }

    free(p);

	return 0;
}


