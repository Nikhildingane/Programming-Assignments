import java.io.*;


class WordCount
{
	public void wordCount(String str[])
	{
		int maxcount=0;
		String maxword="";
		int i=0;
		for(i=0;i<str.length;i++)
		{
			if(maxcount<str[i].length())
			{
				maxcount=str[i].length();
				maxword=str[i];
			}
		}
		System.out.println(maxcount+" "+maxword);
	}
}

class str2
{
	public static void main(String arg[]) throws Exception
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the string :");
		String[] str1=new String[10];
		for(int i=0;i<str1.length;i++)
		{
			str1[i]=br.readLine();
		}
		WordCount obj=new WordCount();
		obj.wordCount(str1);
	}
}