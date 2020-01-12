import java.util.Scanner;

class Q1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the first string :");
		String src=sobj.nextLine();
		System.out.println("Enter the second string :");
		String dest=sobj.nextLine();
		StringDemo obj=new StringDemo();
		System.out.println("Enter the number of character to be concat:");
		int size=sobj.nextInt();
		System.out.println(obj.strNCatX(src,dest,size));
	}
}