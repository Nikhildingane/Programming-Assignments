class StringDemo
{
	public String strNCatX(String src, String dest, int iCnt)
	{
		if(iCnt<0)
		{
			iCnt=-iCnt;
		}
		if(iCnt>dest.length())
		{
			iCnt=dest.length();
		}
		
		int i=0;
		int j=0;
		char result[]=new char[src.length()+iCnt];
		char source[]=src.toCharArray();
		char destination[]=dest.toCharArray();
		
		for(i=0;i<src.length();i++)
		{
			result[i]=source[i];
		}
		
		for(i=src.length(),j=0;j<iCnt;i++,j++)
		{
			result[i]=destination[j];
		}
		return (new String(result));
	}
	
	
	public boolean strCmpX(String src, String dest)
	{
		if(src.length()!=dest.length())
		{
			return false;
		}
		int i=0;
		for(i=0;i<src.length();i++)
		{
			if(src.charAt(i)!=dest.charAt(i))
			{
				break;
			}
		}
		
		if(i==src.length())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	public boolean strNCmpX(String src, String dest,int iCnt)
	{
		if(iCnt>dest.length())
		{
			iCnt=dest.length();
		}
		if(iCnt<0)
		{
			iCnt=-iCnt;
		}
		int i=0;
		for(i=0;i<iCnt;i++)
		{
			if(src.charAt(i)!=dest.charAt(i))
			{
				break;
			}
		}
		
		if(i==iCnt)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	public String strRevTog(String src)
	{
		char Arr[]=src.toCharArray();
		int i=0,j=0;
		for(i=0,j=(Arr.length-1);i<j;i++,j--)
		{	
			char temp=Arr[i];
			if((Arr[j]>='A')&&(Arr[j]<='Z'))
			{
				Arr[i]=(char)(Arr[j] + 32); 
			}
			else if((Arr[j]>='a')&&(Arr[j]<='z'))
			{
				Arr[i]=(char)(Arr[j] - 32); 
			}
			else
			{
				Arr[i]=Arr[j];
			}
			if((temp>='A')&&(temp<='Z'))
			{
				Arr[j]=(char)(temp + 32); 
			}
			else if((temp>='a')&&(temp<='z'))
			{
				Arr[j]=(char)(temp + 32); 
			}
			else
			{
				Arr[j]=temp;
			}
		}
		
		return (new String(Arr));
	}
	
	public boolean strPallindrome(String src)
	{
		int i=0,j=src.length()-1;
		while(i<j)
		{
			if((src.charAt(i)!=src.charAt(j))&&((src.charAt(i)+32)!=src.charAt(j))&&((src.charAt(i)-32)!=src.charAt(j)))
			{
				break;
			}
			
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

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
