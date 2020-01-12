class ProductArray
{
	void productArray(int arr[])
	{
		int[] prod=new int[arr.length];
		
		for(int i=0;i<arr.length;i++)
		{
			prod[i]=1;
			for(int j=0;j<arr.length;j++)
			{
				if(j!=i)
				{
					prod[i]=prod[i]*arr[j];
				}
			}
		}
		for(int i=0;i<arr.length;i++)
		{
			System.out.print(prod[i]+"\t");
		}
	} 
	public static void main(String[] args)
	{
		ProductArray pa = new ProductArray();
		int arr[] = {10, 3, 5, 6, 2};
		System.out.println("The product array is : ");
		pa.productArray(arr);
	}
}