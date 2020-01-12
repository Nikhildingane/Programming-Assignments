class Pattern
{
	public void pattern1(int iRow,int iCol)
	{
		if((iRow<0)||(iCol<0))
		{
			return;
		}
		for(int i=1;i<=iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
				System.out.print((char)(64+j)+"\t");
			}
			System.out.println();
		}
	}
	
	public void pattern2(int iRow,int iCol)
	{
		if((iRow<0)||(iCol<0))
		{
			return;
		}
		for(int i=1;i<=iRow;i++)
		{
			if((i%2)==1)
			{
				for(int j=1;j<=iCol;j++)
				{
					System.out.print((char)(64+j)+"\t");
				}
			}
			else
			{
				for(int j=1;j<=iCol;j++)
				{
					System.out.print((char)(96+j)+"\t");
				}
			}
			System.out.println();
		}
	}
	
	public void pattern3(int iRow,int iCol)
	{
		if((iRow<0)||(iCol<0))
		{
			return;
		}
		for(int i=1;i<=iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
				System.out.print((char)(64+i)+"\t");
			}
			System.out.println();
		}
	}
	
	public void pattern4(int iRow,int iCol)
	{
		if((iRow<0)||(iCol<0))
		{
			return;
		}
		for(int i=iRow;i>0;i--)
		{
			for(int j=1;j<=iCol;j++)
			{
				System.out.print(i+"\t");
			}
			System.out.println();
		}
	}
	
	public void pattern5(int iRow,int iCol)
	{
		if((iRow<0)||(iCol<0))
		{
			return;
		}
		int k=1;
		for(int i=iRow;i>0;i--)
		{
			for(int j=1;j<=iCol;j++)
			{
				System.out.print(k+"\t");
				k++;
			}
			System.out.println();
		}
	}
}