import java.io.*;


class Word
{
	public void removeChar(String str,char ch)
	{
		char[] arr=str.toCharArray();
		String ans="";
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]!=ch)
			{
				ans=ans+arr[i];
			}
		}
		System.out.println(ans);
	}
}

class Q4
{
	public static void main(String arg[]) throws Exception
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the string :");
		String str1=br.readLine();
		System.out.println("Enter character");
		char ch=(char)br.read();
		Word obj=new Word();
		obj.removeChar(str1,ch);
	}
}