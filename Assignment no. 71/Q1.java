import java.io.*;

class Rotation
{
	public boolean chkRotation(String str1,String str2)
	{
		char[] arr=str1.toCharArray();
		char[] brr=str2.toCharArray();
		int i=0,j=0;
		
		while((j<brr.length)&&(arr[0]!=brr[j]))
		{
			j++;
		}
		if(j==brr.length)
		{
			return false;
		}
		for(;(i<arr.length)&&(arr[i]==brr[j%(brr.length)]);i++,j++);
		
		if(i<arr.length)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

class Q1
{
	public static void main(String arg[]) throws Exception
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter first string :");
		String str1=br.readLine();
		System.out.println("Enter second string :");
		String str2=br.readLine();
		Rotation obj=new Rotation();
		if(obj.chkRotation(str1,str2))
		{
			System.out.println("String is rotation string");
		}
		else
		{
			System.out.println("String is not a rotation string");
		}
	}
}