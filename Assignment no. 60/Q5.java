import java.util.Scanner;

class Q5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string :");
		String src=sobj.nextLine();
		StringDemo obj=new StringDemo();
		if(obj.strPallindrome(src))
		{
			System.out.println("Strings is pallindrome");
		}
		else
		{
			System.out.println("Strings is not pallindrome");
		}
	}
}