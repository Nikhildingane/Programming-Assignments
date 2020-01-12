import java.io.*;

class Word
{
	boolean chkParatheses(String expression)
	{
		char[] arr=expression.toCharArray();
		int cnt=0;
		
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]=='(')
			{
				cnt++;
			}
			else if(arr[i]==')')
			{
				cnt--;
			}
		}
		if(cnt==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class Q5
{
	public static void main(String arg[]) throws Exception
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the expression :");
		String str1=br.readLine();
		Word obj=new Word();
		if(obj.chkParatheses(str1))
		{
			System.out.println("true");
		}
		else
		{
			System.out.println("false");
		}
	}
}