public class Digit
{
	public int countEven(int no)
	{
		int iCount=0;
		
		while(no!=0)
		{
			if(((no%10)%2)==0)
			{
				iCount++;
			}
			no=no/10;
		}
		return iCount;
	}
	
	public int countOdd(int no)
	{
		int iCount=0;
		
		while(no!=0)
		{
			if(((no%10)%2)==1)
			{
				iCount++;
			}
			no=no/10;
		}
		return iCount;
	}
	public int countRange(int no)
	{
		int iCount=0;
		
		while(no!=0)
		{
			if(((no%10)>3)&&((no%10)<7))
			{
				iCount++;
			}
			no=no/10;
		}
		return iCount;
	}
	public int multiply(int no)
	{
		int iMult=1;
		
		while(no!=0)
		{
			iMult=iMult*(no%10);
			no=no/10;
		}
		return iMult;
	}
	public int countDiff(int no)
	{
		int iEvenSum=0,iOddSum=0;
		
		while(no!=0)
		{
			if(((no%10)%2)==0)
			{
				iEvenSum=iEvenSum+(no%10);
			}
			else
			{
				iOddSum=iOddSum+(no%10);
			}
			no=no/10;
		}
		return (iEvenSum-iOddSum);
	}
}