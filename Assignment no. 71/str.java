import java.io.*;


class WordCount
{
	public void wordCount(String str)
	{
		char[] arr=str.toCharArray();
		String ans="";
		int i=0;
		for(i=0;i<arr.length;i++)
		{
			if(arr[i]!=' ')
			{
				int iCnt=1;
				for(int j=i+1;(j<arr.length)&&(arr[i]==arr[j]);j++)
				{
					if(arr[i]==arr[j])
					{
						iCnt++;
						arr[j]=' ';
					}
				}
				ans=ans+Integer.toString(iCnt)+arr[i];
			}
		}
		System.out.println(ans);
	}
}

class str
{
	public static void main(String arg[]) throws Exception
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the string :");
		String str1=br.readLine();
		WordCount obj=new WordCount();
		obj.wordCount(str1);
	}
}