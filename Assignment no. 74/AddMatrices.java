import java.util.*;

public class AddMatrices
{
	public static void main(String args[])
	{
		int row1,col1,row2,col2;
		
		Scanner sc=new Scanner(System.in);
		
		//Read number of row1s and col1s
		while(true)
		{
			System.out.print("Input number of first matrix row1s: ");
			row1=sc.nextInt();
			System.out.print("Input number columns of first matrix: ");
			col1=sc.nextInt();
			
			System.out.print("Input number of second matrix row1s: ");
			row2=sc.nextInt();
			System.out.print("Input number columns of second matrix: ");
			col2=sc.nextInt();
			if((row1==row2)&&(col1==col2))
			{
				break;
			}
			else
			{
				System.out.println("Enter valid rows and columns!!!");
			}
		}
		
		//declare two dimensional array (matrices)
		int a[][]=new int[row1][col1];
		int b[][]=new int[row2][col2];
		
		//Read elements of Matrix a
		System.out.println("Enter elements of matrix a:");
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col1; j++)
			{
				System.out.print("Element [" + (i+1) + "," + (j+1) + "] ? ");
				a[i][j]=sc.nextInt();
			}
		}
		
		System.out.println("Enter elements of matrix b:");
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col1; j++)
			{
				System.out.print("Element [" + (i+1) + "," + (j+1) + "] ? ");
				b[i][j]=sc.nextInt();
			}
		}
		
		//print matrix a
		System.out.println("Matrix a:");
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col1; j++)
			{
				System.out.print(a[i][j] + "\t");
			}
			System.out.print("\n");
		} 
		System.out.println("Matrix b:");
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col1; j++)
			{
				System.out.print(b[i][j] + "\t");
			}
			System.out.print("\n");
		} 
		
		System.out.println("Addition of matrix a and b is ");
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col1; j++)
			{
				System.out.print((b[i][j] + a[i][j])+ "\t");
			}
			System.out.print("\n");
		} 
	}
} 