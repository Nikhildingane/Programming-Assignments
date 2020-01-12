import java.util.Scanner;

class Q1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number of elements of array :");
		char arr[]=new char[sobj.nextInt()];
		
		System.out.println("Enter the elements of array");
		
		for	(int i=0;i<arr.length;i++)
		{
			arr[i]=sobj.next().charAt(0);
		}
		
		MyArray obj=new MyArray();
		obj.arrayReplace(arr);
	}
}