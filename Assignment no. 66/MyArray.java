class MyArray
{
	public void display(int Arr[],int Brr[])
	{
		for(int i=0;i<Arr.length;i++)
		{
			System.out.print(Arr[i]+"\t");
		}
		System.out.println();
		for(int i=0;i<Brr.length;i++)
		{
			System.out.print(Brr[i]+"\t");
		}
	}
	
	public void displayEven(int Arr[],int Brr[])
	{
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]%2)==0)
			{
				System.out.print(Arr[i]+"\t");
			}
		}
		System.out.println();
		for(int i=0;i<Brr.length;i++)
		{
			if((Brr[i]%2)==0)
			{
				System.out.print(Brr[i]+"\t");
			}
		}
	}
	public void displayOdd(int Arr[],int Brr[])
	{
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]%2)==1)
			{
				System.out.print(Arr[i]+"\t");
			}
		}
		System.out.println();
		for(int i=0;i<Brr.length;i++)
		{
			if((Brr[i]%2)==1)
			{
				System.out.print(Brr[i]+"\t");
			}
		}
	}
	public int[] arrayConcate(int Arr[],int Brr[])
	{
		int result[]=new int[Arr.length+Brr.length];
		int i=0;
		for(i=0;i<Arr.length;i++)
		{
			result[i]=Arr[i];
		}
		for(int j=0;j<Brr.length;j++,i++)
		{
			result[i]=Brr[j];
		}
		return result;
	}
	
	public void sumArray(int Arr[],int Brr[])
	{
		int sum=0;
		for(int i=0;i<Arr.length;i++)
		{
			sum=sum+Arr[i];
		}
		System.out.println("Sum of elements of first array is : "+sum);
		sum=0;
		for(int i=0;i<Brr.length;i++)
		{
			sum=sum+Brr[i];
		}
		System.out.println("Sum of elements of second array is : "+sum);
	}
	
}