class EquilibriumIndex
{
	void equilibrium(int arr[])
	{
		int lowersum=0,highersum=0;
		for(int i=0;i<arr.length;i++)
		{
			if(i==0)
			{
				lowersum=arr[i];
			}
			else
			{
				lowersum=0;
			}
			if(i==arr.length-1)
			{
				highersum=arr[i];
			}
			else
			{
				highersum=0;
			}
			for(int j=0;j<i;j++)
			{
				lowersum=lowersum+arr[j];
			}
			for(int j=i+1;j<arr.length;j++)
			{
				highersum=highersum+arr[j];
			}
			if(lowersum==highersum)
			{
				System.out.println("arr["+i+"] is equilibrium index ");
			}
		}
	}
	
	public static void main(String[] args)
	{
		EquilibriumIndex equi = new EquilibriumIndex();
		int arr[] = {-7, 1, 5, 2, -4, 3, 0};
		System.out.println("First equilibrium index is ");
		equi.equilibrium(arr);
	} 
}