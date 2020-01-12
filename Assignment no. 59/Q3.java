import java.util.Scanner;

class Q3
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
		System.out.println("First occurence is "+obj.lastOcc(Arr,no));
		
	}
}