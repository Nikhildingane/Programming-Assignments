import java.util.Scanner;

class Q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string :");
		String src=sobj.nextLine();
		StringDemo obj=new StringDemo();
		System.out.println("Reversed string is : "+obj.strRevTog(src));
	}
}