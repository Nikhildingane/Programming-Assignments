import java.util.Scanner;

class Q1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number of elements of first array :");
		int arr[]=new int[sobj.nextInt()];
		
		System.out.println("Enter the elements of first array");
		
		for	(int i=0;i<arr.length;i++)
		{
			arr[i]=sobj.nextInt();
		}
		
		System.out.println("Enter the number of elements of second array :");
		int brr[]=new int[sobj.nextInt()];
		
		System.out.println("Enter the elements of second array");
		
		for(int j=0;j<brr.length;j++)
		{
			brr[j]=sobj.nextInt();
		}
		MyArray obj=new MyArray();
		System.out.println("Difference between sum of both arrays : "+obj.diffArray(arr,brr));
	}
}