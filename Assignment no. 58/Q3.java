import java.util.Scanner;

class Q3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number:");
		int value=sobj.nextInt();
		Digit obj=new Digit();
		System.out.println("count of digits between 3 and 7 : "+obj.countRange(value));
		
	}
}