public class StringDemo
{
	public int countCapital(String str)
	{
		char arr[]=str.toCharArray();
		int iCount=0;
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>='A')&&(arr[i]<='Z'))
			{
				iCount++;
			}
		}
		return iCount;
	}
	public int countSmall(String str)
	{
		char arr[]=str.toCharArray();
		int iCount=0;
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>='a')&&(arr[i]<='z'))
			{
				iCount++;
			}
		}
		return iCount;
	}
	public int countDiff(String str)
	{
		char arr[]=str.toCharArray();
		int iCapCount=0,iSmallCount=0;
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>='a')&&(arr[i]<='z'))
			{
				iSmallCount++;
			}
			else if((arr[i]>='A')&&(arr[i]<='Z'))
			{
				iCapCount++;
			}
		}
		System.out.println(iSmallCount);
		System.out.println(iCapCount);
		return (iSmallCount-iCapCount);
	}
	public boolean chkVowel(String str)
	{
		char arr[]=str.toCharArray();
		int i=0;
		for(i=0;i<arr.length;i++)
		{
			if((arr[i]=='A')||(arr[i]=='a')||(arr[i]=='E')||(arr[i]=='e')||(arr[i]=='I')||(arr[i]=='i')||(arr[i]=='O')||(arr[i]=='o')||(arr[i]=='U')||(arr[i]=='u'))
			{
				break;
			}
		}
		if(i!=arr.length)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	public String reverse(String str)
	{
		char Arr[]=str.toCharArray();
		int j=Arr.length-1;
		int i=0;
		while(i<j)
		{
			char temp=Arr[i];
			Arr[i]=Arr[j];
			Arr[j]=temp;
			
			i++;
			j--;
		}
		return (new String(Arr));
	}
}