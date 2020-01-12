import java.io.*;


class Word
{
	public void maxFreqWord(String str)
	{
		char[] arr=str.toCharArray();
		String maxword="";
		int maxcount=0;
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
				//System.out.println(word+"\t"+cnt);
				if(maxcount<cnt)
				{
					maxcount=cnt;
					maxword=word;
				}
			}
			i++;
		}
		
		System.out.println(maxword);
	}
}

class Q3
{
	public static void main(String arg[]) throws Exception
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the string :");
		String str1=br.readLine();
		Word obj=new Word();
		obj.maxFreqWord(str1);
	}
}