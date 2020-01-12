public class ArrayDemo
{
	public int difference(int Arr[])
	{
		int iEvenSum=0,iOddSum=0;
		
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]%2)==0)
			{
				iEvenSum=iEvenSum+Arr[i];
			}
			else
			{
				iOddSum=iOddSum+Arr[i];
			}
		}
		return (iEvenSum-iOddSum);
	}
	public void display(int Arr[])
	{
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]%5)==0)
			{
				System.out.print(Arr[i]+"\t");
			}
		}
	}
	public void evenDivisibleDisplay(int Arr[])
	{
		for(int i=0;i<Arr.length;i++)
		{
			if(((Arr[i]%5)==0)&&((Arr[i]%2)==0))
			{
				System.out.print(Arr[i]+"\t");
			}
		}
	}
	public void divisibleDisplay(int Arr[])
	{
		for(int i=0;i<Arr.length;i++)
		{
			if(((Arr[i]%5)==0)&&((Arr[i]%3)==0))
			{
				System.out.print(Arr[i]+"\t");
			}
		}
	}
	public void multipleDisplay(int Arr[])
	{
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]%11)==0)
			{
				System.out.print(Arr[i]+"\t");
			}
		}
	}
}