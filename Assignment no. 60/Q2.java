import java.util.Scanner;

class Q2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the first string :");
		String src=sobj.nextLine();
		System.out.println("Enter the second string :");
		String dest=sobj.nextLine();
		StringDemo obj=new StringDemo();
		if(obj.strCmpX(src,dest))
		{
			System.out.println("Strings are equal");
		}
		else
		{
			System.out.println("Strings are not equal");
		}
	}
}