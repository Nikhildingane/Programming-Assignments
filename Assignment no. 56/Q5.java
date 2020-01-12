import java.util.Scanner;

class Q5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string");
		String str=sobj.nextLine();
		StringDemo obj=new StringDemo();
		System.out.println("Reversed string is :\n"+obj.reverse(str));
	}
}