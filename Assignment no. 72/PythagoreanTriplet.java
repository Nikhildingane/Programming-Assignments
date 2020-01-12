class PythagoreanTriplet
{
	
	static boolean isTriplet(int arr[])
	{
		int i=0,j=0,k=0;
		boolean flag=true;
		for( i=0;(i<arr.length)&&(flag==true);i++)
		{
			for( j=i+1;(j<arr.length)&&(flag==true);j++)
			{
				for( k=j+1;k<arr.length;k++)
				{
					//System.out.println((arr[k]*arr[k])+" = "+(arr[i]*arr[i])+" + "+(arr[j]*arr[j]));
					if((arr[k]*arr[k])==((arr[i]*arr[i])+(arr[j]*arr[j])))
					{
						flag=false;
						break;
					}
				}
			}
		}
		if(i<arr.length)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	public static void main(String[] args)
	{
		int arr[] = {3, 1, 4, 6, 5};
		if(isTriplet(arr)==true)
		{
			System.out.println("Yes");
		}
		else
		{
			System.out.println("No");
		}
	} 
}