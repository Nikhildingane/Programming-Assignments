class MaximumDifference
{
	int maxDiff(int arr[])
	{
		int maxdif=0;
		boolean flag=true;
		for(int i=0;i<arr.length;i++)
		{
			for(int j=i;j<arr.length;j++)
			{
				if((arr[i]<=arr[j])&&(flag==true))
				{
					maxdif=arr[j]-arr[i];
					flag=false;
				}
				else if((arr[i]<=arr[j])&&(maxdif<=(arr[j]-arr[i])))
				{
					maxdif=arr[j]-arr[i];
				}
			}
		}
		return maxdif;
	}
	public static void main(String[] args)
	{
		MaximumDifference maxdif = new MaximumDifference();
		int arr[] = {7, 9, 5, 6, 3, 2};
		System.out.println("Maximum differnce is " +maxdif.maxDiff(arr));
	} 
}
