import java.util.Scanner;

class Q3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string :");
		String str=sobj.nextLine();
		Pattern obj=new Pattern();
		obj.pattern3(str);
	}
}