import java.util.Scanner;

class Pattern2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the number");
		int no=sobj.nextInt();
		
		for(int i=1;i<=no;i++)
		{
			for(int j=1;j<i;j++)
			{
				System.out.print(" ");
			}
			
			for(int j=no+1-i;j>=1;j--)
			{
				System.out.print("* ");
			}		
			System.out.println();
		}
	}
}