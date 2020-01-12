
import java.util.Scanner;

class Q2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string");
		String str=sobj.nextLine();
		StringDemo obj=new StringDemo();
		System.out.println("small count is : \n"+obj.countSmall(str));
	}
}