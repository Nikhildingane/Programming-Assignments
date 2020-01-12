import java.util.Scanner;

class Q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string");
		String str=sobj.nextLine();
		StringDemo obj=new StringDemo();
		if(obj.chkVowel(str))
		{
			System.out.println("There is vowel in string");
		}
		else
		{
			System.out.println("There is no any vowel in string");
		}
	}
}