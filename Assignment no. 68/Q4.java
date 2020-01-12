import java.util.Scanner;

class Q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number of students:");
		int arr[]=new int[sobj.nextInt()];
		
		System.out.println("Enter the marks of students");
		
		for	(int i=0;i<arr.length;i++)
		{
			arr[i]=sobj.nextInt();
		}
		
		MyArray obj=new MyArray();
		obj.percentage(arr);
	}
}