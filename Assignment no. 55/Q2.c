//Reverse the rows of the matrix

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void ReverseRow(int **Arr,int iRow,int iCol)
{
	int i=0,j=0,l=0,temp;
	for(i=0;i<iRow;i++)
	{
		for(j=(iCol-1),l=0;l<j;j--,l++)
		{
            temp=Arr[i][l];
		    Arr[i][l]=Arr[i][j];
		    Arr[i][j]=temp;
		}

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

    ReverseRow(p,iRow,iCol);

    printf("\nAfter swapping :\n");
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }

    free(p);

	return 0;
}

