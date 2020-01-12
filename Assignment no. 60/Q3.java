import java.util.Scanner;

class Q3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the first string :");
		String src=sobj.nextLine();
		System.out.println("Enter the second string :");
		String dest=sobj.nextLine();
		System.out.println("Enter the number of character to be compare:");
		int size=sobj.nextInt();
		StringDemo obj=new StringDemo();
		if(obj.strNCmpX(src,dest,size))
		{
			System.out.println("Strings are equal");
		}
		else
		{
			System.out.println("Strings are not equal");
		}
	}
}