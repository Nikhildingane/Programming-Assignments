class MyArray
{
	public int diffArray(int Arr[],int Brr[])
	{
		int sum1=0,sum2=0;
		for(int i=0;i<Arr.length;i++)
		{
			sum1=sum1+Arr[i];
		}
		for(int i=0;i<Brr.length;i++)
		{
			sum2=sum2+Brr[i];
		}
		return (sum1-sum2);
	}
	
	public void minArray(int Arr[],int Brr[])
	{
		int iMin1=Arr[0],iMin2=Brr[0];
		for(int i=0;i<Arr.length;i++)
		{
			if(Arr[i]<iMin1)
			{
				iMin1=Arr[i];
			}
		}
		for(int i=0;i<Brr.length;i++)
		{
			if(Brr[i]<iMin2)
			{
				iMin2=Brr[i];
			}
		}
		System.out.println("Minimum of from first array : "+iMin1);
		System.out.println("Minimum of from second array : "+iMin2);
	}
	public int[] copyArrayRev(int Arr[])
	{
		int result[]=new int[Arr.length];
		for(int i=0,j=Arr.length-1;i<Arr.length;i++,j--)
		{
			result[i]=Arr[j];
		}
		return result;
	}
	public int[] copyArray(int Arr[])
	{
		int result[]=new int[Arr.length];
		for(int i=0;i<Arr.length;i++)
		{
			result[i]=Arr[i];
		}
		return result;
	}
	
	public boolean chkPallindrome(int Arr[])
	{
		int i=0,j=Arr.length-1;
		while((i<j)&&(Arr[i]==Arr[j]))
		{
			i++;
			j--;
		}
		if(i<j)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	
}