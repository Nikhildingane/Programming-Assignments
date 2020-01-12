import java.io.*;


class WordCount
{
	public void wordCount(String str)
	{
		char[] arr=str.toCharArray();
		int i=0;
		while(i<arr.length)
		{
			if(arr[i]!=' ')
			{
				String word="",word2="";
				int cnt=0;
				while((i<arr.length)&&(arr[i]!=' '))
				{
					word=word+arr[i];
					i++;
				}
				cnt++;
				//System.out.println(word);
				for(int j=i;j<arr.length;j++)
				{
					int start;
					if(arr[j]!=' ')
					{
						start=j;
						while((j<arr.length)&&(arr[j]!=' '))
						{
							word2=word2+arr[j];
							j++;
						}
						if(word.equals(word2))
						{
							cnt++;
							for(;start<j;start++)
							{
								arr[start]=' ';
							}
						}
					}
					
					word2="";
				}
				System.out.println(word+"\t"+cnt);
			}
			i++;
		}
	}
}

class Q2
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