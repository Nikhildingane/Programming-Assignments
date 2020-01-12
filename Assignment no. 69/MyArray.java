class MyArray
{
	public void arrayReplace(char Arr[])
	{
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]>='A')&&(Arr[i]<='Z'))
			{
				Arr[i]=(char)(Arr[i]+32);
			}
		}
		for(int i=0;i<Arr.length;i++)
		{
			System.out.print(Arr[i]+"\t");
		}
	}
	
	public int countVowvels(char Arr[])
	{
		int iCnt=0;
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]=='A')||(Arr[i]=='a')||(Arr[i]=='E')||(Arr[i]=='e')||(Arr[i]=='I')||(Arr[i]=='i')||(Arr[i]=='O')||(Arr[i]=='o')||(Arr[i]=='U')||(Arr[i]=='u'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
	public int search(char Arr[],char ch)
	{
		int iCnt=0;
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]==ch)||(Arr[i]==(char)(ch+32))||(Arr[i]==(char)(ch-32)))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
	
	public int difference(char Arr[])
	{
		int iCnt1=0,iCnt2=0;
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]>='A')&&(Arr[i]<='Z'))
			{
				iCnt1++;
			}
			else if((Arr[i]>='a')&&(Arr[i]<='z'))
			{
				iCnt2++;
			}
			
		}
		return (iCnt1-iCnt2);
	}
	
	public void pattern(int Arr[])
	{
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr[i];j++)
			{
				System.out.print("*\t");
			}
			System.out.println();
		}
	}
	
}