class SegregateOddEven 
{
	static void segregateEvenOdd(int arr[])
	{
		int sumcount=0;
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]%2)==0)
			{
				sumcount++;
			}
		}
		for(int i=0;i<=sumcount;i++)
		{
			if((arr[i]%2)!=0)
			{
				int j=0,index=0;
				for(j=i+1;j<arr.length;j++)
				{
					if((arr[j]%2)==0)
					{
						index=j;
						break;
					}
				}
				if(j==arr.length)
				{
					break;
				}
				while(index>i)
				{
					int temp=arr[index];
					arr[index]=arr[index-1];
					arr[index-1]=temp;
					index--;
				}
			}
		}
	} 
	public static void main (String[] args)
	{
		int arr[] = {45, 12, 34, 9, 8, 90, 3};
		
		segregateEvenOdd(arr);
		
		System.out.print("Array after segregation \n");
		for (int i = 0; i < arr.length; i++)
		{
			System.out.print(arr[i]+" ");
		}
	} 
}