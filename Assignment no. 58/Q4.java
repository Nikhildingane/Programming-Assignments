import java.util.Scanner;

class Q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number:");
		int value=sobj.nextInt();
		Digit obj=new Digit();
		System.out.println("Multiplication of digits : "+obj.multiply(value));
		
	}
}