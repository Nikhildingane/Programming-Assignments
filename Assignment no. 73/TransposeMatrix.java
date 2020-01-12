//import java.util.Scanner;

public class TransposeMatrix
{
	public static void main(String args[])
	{
		int row,col;
		
		Scanner sc=new Scanner(System.in);
		
		//Read number of rows and cols
		System.out.print("Input number of rows: ");
		row=sc.nextInt();
		System.out.print("Input number of rows: ");
		col=sc.nextInt();
		
		//declare two dimensional array (matrices)
		int a[][]=new int[row][col];
		
		//Read elements of Matrix a
		System.out.println("Enter elements of matrix a:");
		for(int i=0; i<row; i++)
		{
			for(int j=0; j<col; j++)
			{
				System.out.print("Element [" + (i+1) + "," + (j+1) + "] ? ");
				a[i][j]=sc.nextInt();
			}
		}
		
		//print matrix a
		System.out.println("Matrix a:");
		for(int i=0; i<row; i++)
		{
			for(int j=0; j<col; j++)
			{
				System.out.print(a[i][j] + "\t");
			}
			System.out.print("\n");
		} 
		System.out.println("::: Transpose Matrix ::: ");
		// Logic
		int transpose[][]=new int[col][row];
		for(int i=0;i<col;i++)
		{
			for(int j=0;j<row;j++)
			{
				transpose[i][j]=a[j][i];
			}
		}
		
		for(int i=0;i<col;i++)
		{
			for(int j=0;j<row;j++)
			{
				System.out.print(transpose[i][j]+"\t");
			}
			System.out.println();
		}
	} 
} 