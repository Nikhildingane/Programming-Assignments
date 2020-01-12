
import java.util.Scanner;

class Q3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string");
		String str=sobj.nextLine();
		StringDemo obj=new StringDemo();
		System.out.println("Difference between frequency of capital and small case letters is : \n"+obj.countDiff(str));
	}
}