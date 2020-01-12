import java.util.Scanner;

class Q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the number of rows and column of square matrix:");
		int iRow=sobj.nextInt();
		int iCol=iRow;
		
		int matrix[][]=new int[iRow][iCol];
		
		System.out.println("Enter the elements of matrix:");
		
		for(int i=0;i<iRow;i++)
		{
			for(int j=0;j<iCol;j++)
			{
				matrix[i][j]=sobj.nextInt();
			}
		}
		
		System.out.println("Matrix is :");
		
		for(int i=0;i<iRow;i++)
		{
			for(int j=0;j<iCol;j++)
			{
				System.out.print(matrix[i][j]+"\t");
			}
			System.out.println();
		}
		
		Matrix obj=new Matrix();
		obj.matrixTraceNormal(matrix);
	}
}