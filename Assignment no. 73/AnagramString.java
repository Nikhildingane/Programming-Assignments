import java.util.Arrays;
import java.util.Scanner;
class AnagramString
{
	static boolean isAnagrams(String str1,String str2)
	{
		if(str1.length()!=str2.length())
		{
			return false;
		}
		
		int[] arr=new int[26];
		for(int i=0;i<26;i++)
		{
			arr[i]=0;
		}
		
		char[] carr=str1.toCharArray();
		char[] cbrr=str2.toCharArray();
		
		for(int i=0;i<carr.length;i++)
		{
			if((carr[i]>='A')&&(carr[i]<'Z'))
			{
				arr[carr[i]-65]++;
			}
			else if((carr[i]>='a')&&(carr[i]<'z'))
			{
				arr[carr[i]-97]++;
			}
			if((cbrr[i]>='A')&&(cbrr[i]<'Z'))
			{
				arr[cbrr[i]-97]--;
			}
			else if((cbrr[i]>='a')&&(cbrr[i]<'z'))
			{
				arr[cbrr[i]-97]--;
			}
		}
		
		int i=0;
		for(i=0;i<26;i++)
		{
			if(arr[i]!=0)
			{
				break;
			}
		}
		
		if(i<26)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter String1 : ");
		String str1 = sc.nextLine();
		System.out.println("Enter String2 : ");
		String str2 = sc.nextLine();
		if(isAnagrams(str1,str2))
		{
			System.out.println("Anagram Strings !!");
		}
		else
		{
			System.out.println("Strings are not Anagram !!");
		}
	}
}