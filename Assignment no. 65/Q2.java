import java.util.Scanner;

class Q2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number of rows :");
		int iRow=sobj.nextInt();
		System.out.println("Enter the number of columns :");
		int iCol=sobj.nextInt();
		Pattern obj=new Pattern();
		obj.pattern2(iRow,iCol);
	}
}