import java.util.Scanner;
class ReverseEachWord
{ 
	//ABC XY PQ
	static void reverseWord(String inputString)
	{
		char[] arr=inputString.toCharArray();
		int i=0;
		while(i<arr.length)
		{
			if(arr[i]!=' ')
			{
				int start=i;
				while((i+1<arr.length)&&(arr[i+1]!=' '))
				{
					i++;
				}
				int end=i;
				while(start<end)
				{
					char temp=arr[start];
					arr[start]=arr[end];
					arr[end]=temp;
					start++;
					end--;
				}
			}
			i++;
		}
		System.out.println(new String(arr));
	}
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enput String : ");
		String str = sc.nextLine();
		System.out.println("Input String : "+str);
		reverseWord(str);
	}
} 