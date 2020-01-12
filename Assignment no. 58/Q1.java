import java.util.Scanner;

class Q1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number:");
		int value=sobj.nextInt();
		Digit obj=new Digit();
		System.out.println("count of event digits is : "+obj.countEven(value));
		
	}
}