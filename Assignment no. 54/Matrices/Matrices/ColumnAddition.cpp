#include "MyHeader.h"

void ColumnAddition(int **Arr,int iRow,int iCol)
{
	int iSum=0,i=0,j=0;
	printf("\n");
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			iSum=iSum+Arr[j][i];
		}
		printf("%d\t",iSum);
		iSum=0;
	}

}