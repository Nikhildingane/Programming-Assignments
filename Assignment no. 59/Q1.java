import java.util.Scanner;

class Q1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number of elements:");
		int Arr[]=new int[sobj.nextInt()];
		System.out.println("Enter the elements:");
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		System.out.println("Enter the number");
		int no=sobj.nextInt();
		Num obj=new Num();
		if(obj.check(Arr,no))
		{
			System.out.println("Number is present in array");
		}
		else
		{
			System.out.println("Number is not present in array");
		}
	}
}