//Transpose of Matrix

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void Transpose(int **Arr,int iRow,int iCol)
{
	int i=0,j=0,temp;
	printf("Transpose of matrix is :\n");
	for(i=0;i<iRow;i++)
	{
		for(j=i;j<iCol;j++)
		{
		    temp=Arr[i][j];
		    Arr[i][j]=Arr[j][i];
		    Arr[j][i]=temp;
		}
		printf("\n");
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

    Transpose(p,iRow,iCol);

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
