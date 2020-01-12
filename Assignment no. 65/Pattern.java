class Pattern
{
	public void pattern1(int iRow,int iCol)
	{
		if(iRow!=iCol)
		{
			return;
		}
		for(int i=1;i<=iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
				if((i+j)==(iRow+1))
				{
					System.out.print("#\t");
				}
				else
				{
					System.out.print("*\t");
				}
			}
			System.out.println();
		}
	}
	
	public void pattern2(int iRow,int iCol)
	{
		if(iRow!=iCol)
		{
			return;
		}
		for(int i=1;i<=iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
				if((i+j)==(iRow+1))
				{
					System.out.print("#\t");
				}
				else if((i+j)<(iRow+1))
				{
					System.out.print("*\t");
				}
				else
				{
					System.out.print("@\t");
				}
			}
			System.out.println();
		}
	}
	
	public void pattern3(int iRow,int iCol)
	{
		if(iRow!=iCol)
		{
			return;
		}
		for(int i=1;i<=iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
				if((i==1)||(i==iRow)||(j==1)||(j==iCol)||(i+j)==(iRow+1))
				{
					System.out.print("*\t");
				}
				else
				{
					System.out.print(" \t");
				}
			}
			System.out.println();
		}
	}
	
	public void pattern4(int iRow,int iCol)
	{
		if(iRow!=iCol)
		{
			return;
		}
		for(int i=1;i<=iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
				if((i==1)||(i==iRow)||(j==1)||(j==iCol)||(i+j)==(iRow+1))
				{
					System.out.print("*\t");
				}
				else if((i+j)<(iRow+1))
				{
					System.out.print("#\t");
				}
				else
				{
					System.out.print("$\t");
				}
			}
			System.out.println();
		}
	}
	
	public void pattern5(int iRow,int iCol)
	{
		if(iRow!=iCol)
		{
			return;
		}
		for(int i=1;i<=iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
				if((i==1)||(i==iRow)||(j==1)||(j==iCol)||(i==j))
				{
					System.out.print(j+"\t");
				}
				else
				{
					System.out.print(" \t");
				}
			}
			System.out.println();
		}
	}
}