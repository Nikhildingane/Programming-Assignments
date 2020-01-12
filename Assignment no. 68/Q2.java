import java.util.Scanner;

class Q2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number of elements of array :");
		int arr[]=new int[sobj.nextInt()];
		
		System.out.println("Enter the elements of array");
		
		for	(int i=0;i<arr.length;i++)
		{
			arr[i]=sobj.nextInt();
		}
		
		MyArray obj=new MyArray();
		obj.arrayDigitSum(arr);
	}
}