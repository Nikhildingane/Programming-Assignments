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
				System.out.print("*\t");
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
			for(int j=1;j<=iCol;j++)
			{
				System.out.print(j+"\t");
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
			for(int j=iCol;j>=1;j--)
			{
				System.out.print(j+"\t");
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
		for(int i=1;i<=iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
				if((j%2)==1)
				{
					System.out.print("*\t");
				}
				else
				{
					System.out.print("#\t");
				}
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
		for(int i=1;i<=iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
				System.out.print(i+"\t");
			}
			System.out.println();
		}
	}
}