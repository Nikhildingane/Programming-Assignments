class Pattern
{
	public void pattern1(String str)
	{
		if(str==null)
		{
			return;
		}
		for(int i=0;i<str.length();i++)
		{
			for(int j=0;j<str.length();j++)
			{
				System.out.print(str.charAt(j)+"\t");
			}
			System.out.println();
		}
		
	}
	
	public void pattern2(String str)
	{
		if(str==null)
		{
			return;
		}
		for(int i=str.length()-1;i>=0;i--)
		{
			for(int j=0;j<=i;j++)
			{
				System.out.print(str.charAt(j)+"\t");
			}
			System.out.println();
		}
	}
	
	public void pattern3(String str)
	{
		if(str==null)
		{
			return;
		}
		if(str==null)
		{
			return;
		}
		for(int i=0;i<str.length();i++)
		{
			for(int j=0;j<=i;j++)
			{
				System.out.print(str.charAt(j)+"\t");
			}
			System.out.println();
		}
	}
	
	public void pattern4(String str)
	{
		if(str==null)
		{
			return;
		}
		for(int i=str.length()-1;i>=0;i--)
		{
			for(int j=0;j<=i;j++)
			{
				System.out.print(str.charAt(j)+"\t");
			}
			System.out.println();
		}
		for(int i=1;i<str.length();i++)
		{
			for(int j=0;j<=i;j++)
			{
				System.out.print(str.charAt(j)+"\t");
			}
			System.out.println();
		}
		
	}
	
	public void pattern5(String str)
	{
		if(str==null)
		{
			return;
		}
		for(int i=0;i<str.length();i++)
		{
			for(int j=0;j<=i;j++)
			{
				System.out.print(str.charAt(j)+"\t");
			}
			System.out.println();
		}
		for(int i=str.length()-2;i>=0;i--)
		{
			for(int j=0;j<=i;j++)
			{
				System.out.print(str.charAt(j)+"\t");
			}
			System.out.println();
		}
	}
}