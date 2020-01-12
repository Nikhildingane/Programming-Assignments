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
		ArrayDemo obj=new ArrayDemo();
		System.out.println("Difference between summetion of even and odd elements is \n:"+obj.difference(Arr));
	}
}