public class Num
{
	public boolean check(int Arr[],int iNo)
	{
		int i=0;
		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i]==iNo)
			{
				break;
			}
		}
		if(i<Arr.length)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	public int firstOcc(int Arr[],int iNo)
	{
		int i=0;
		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i]==iNo)
			{
				break;
			}
		}
		if(i==Arr.length)
		{
			return -1;
		}
		else
		{
			return i;
		}
	}
	public int lastOcc(int Arr[],int iNo)
	{
		int i=0;
		int cnt=-1;
		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i]==iNo)
			{
				cnt=i;
			}
		}
		return cnt;
	}
	public void display(int Arr[], int iStart, int iEnd)
	{
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]>=iStart)&&(Arr[i]<=iEnd))
			{
				System.out.println(Arr[i]+"\t");
			}
		}
	}
	public int product(int Arr[])
	{
		int iMult=1;
		for(int i=0;i<Arr.length;i++)
		{
			iMult=iMult*Arr[i];
		}
		return iMult;
	}
}



























