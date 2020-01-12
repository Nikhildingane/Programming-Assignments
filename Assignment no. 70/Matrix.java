import java.lang.Math;
class Matrix
{
	public void rowExchange(int Arr[][])
	{
		for(int i=0;i<Arr.length;i=i+2)
		{
			if((i+1)==Arr.length)
			{
				break;
			}
			for(int j=0;j<Arr[i].length;j++)
			{
				int temp=Arr[i][j];
				Arr[i][j]=Arr[i+1][j];
				Arr[i+1][j]=temp;
			}
			if((i+2)==Arr.length)
			{
				break;
			}
		}
		System.out.println("Matrix is ");
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr[i].length;j++)
			{
				System.out.print(Arr[i][j]+"\t");
			}
			System.out.println();
		}
	}
	public void columnExchange(int Arr[][])
	{
		for(int i=0;i<Arr.length;i++)
		{			
			for(int j=0;j<Arr[i].length;j=j+2)
			{
				if((j+1)==Arr[i].length)
				{
					break;
				}
				int temp=Arr[i][j];
				Arr[i][j]=Arr[i][j+1];
				Arr[i][j+1]=temp;
				
				if((j+2)==Arr[i].length)
				{
					break;
				}
			}
		}
		System.out.println("Matrix is ");
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr[i].length;j++)
			{
				System.out.print(Arr[i][j]+"\t");
			}
			System.out.println();
		}
	}
	public void transpose(int Arr[][])
	{
		//int trans[][]=new int[Arr[0].length][Arr.length];
		System.out.println("Transpose of matrix is ");
		for(int i=0;i<Arr[0].length;i++)
		{
			for(int j=0;j<Arr.length;j++)
			{
				System.out.print(Arr[j][i]+"\t");
			}
			System.out.println();
		}
	}
	public void matrixTraceNormal(int Arr[][])
	{
		int trace=0,normal=0;
		for(int i=0;i<Arr[0].length;i++)
		{
			for(int j=0;j<Arr.length;j++)
			{
				if(i==j)
				{
					trace=trace+Arr[i][j];
				}
				normal=normal+Arr[i][j];
			}
		}
		System.out.println("Trace is : "+trace);
		System.out.println("Normal of matrix is : "+Math.sqrt(normal));
	}
	public int borderAddition(int Arr[][])
	{
		int sum=0;
		int i=0,j=0;
		for(j=0;j<Arr[0].length-1;j++)
		{
			sum=sum+Arr[i][j];
		}
		for(;i<Arr.length-1;i++)
		{
			sum=sum+Arr[i][j];
		}
		for(;j>0;j--)
		{
			sum=sum+Arr[i][j];
		}
		for(;i>0;i--)
		{
			sum=sum+Arr[i][j];
		}
		return sum;
	}
}