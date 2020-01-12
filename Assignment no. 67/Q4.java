import java.util.Scanner;

class Q4
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
		int ret[]=obj.copyArray(arr);
		
		System.out.println("Copied array is");
		for(int i=0;i<ret.length;i++)
		{
			System.out.print(ret[i]+"\t");
		}
	}
}