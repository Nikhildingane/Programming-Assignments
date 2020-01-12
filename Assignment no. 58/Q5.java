import java.util.Scanner;

class Q5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number:");
		int value=sobj.nextInt();
		Digit obj=new Digit();
		System.out.println("Difference between sum of even and odd digits : "+obj.countDiff(value));
		
	}
}