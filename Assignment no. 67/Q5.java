import java.util.Scanner;

class Q5
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
		boolean ret=obj.chkPallindrome(arr);
		
		if(ret==true)
		{
			System.out.println("Array is pallindrome");
		}
		else
		{
			System.out.println("Array is not pallindrome");
		}
	}
}