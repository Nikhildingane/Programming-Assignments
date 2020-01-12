class MyArray
{
	public void reverseArray(int Arr[])
	{
		int rev=0;
		for(int i=0;i<Arr.length;i++)
		{
			while(Arr[i]!=0)
			{
				rev=(rev*10)+(Arr[i]%10);
				Arr[i]=Arr[i]/10;
			}
			Arr[i]=rev;
			rev=0;
		}
		
		for(int i=0;i<Arr.length;i++)
		{
			System.out.print(Arr[i]+"\t");
		}
	}
	
	public void arrayDigitSum(int Arr[])
	{
		int sum=0;
		for(int i=0;i<Arr.length;i++)
		{
			while(Arr[i]!=0)
			{
				sum=sum+(Arr[i]%10);
				Arr[i]=Arr[i]/10;
			}
			Arr[i]=sum;
			sum=0;
		}
		
		for(int i=0;i<Arr.length;i++)
		{
			System.out.print(Arr[i]+"\t");
		}
	}
	
	public int arrayCapital(char Arr[])
	{
		int iCnt=0;
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]>='A')&&(Arr[i]<='Z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
	
	public void percentage(int Arr[])
	{
		
		for(int i=0;i<Arr.length;i++)
		{
			System.out.print(Arr[i]+"\t\t");
			if((Arr[i]>=70)&&(Arr[i]<=100))
			{
				System.out.print("First class with distinction");
			}
			else if((Arr[i]>=60)&&(Arr[i]<70))
			{
				System.out.print("First class");
			}
			else if((Arr[i]>=50)&&(Arr[i]<60))
			{
				System.out.print("Second class");
			}
			else if((Arr[i]>=35)&&(Arr[i]<50))
			{
				System.out.print("Pass class");
			}
			else if((Arr[i]>=0)&&(Arr[i]<35))
			{
				System.out.print("First class");
			}
			else
			{
				System.out.print("Invalid Marks");
			}
			System.out.println();
		}
	}
	
}