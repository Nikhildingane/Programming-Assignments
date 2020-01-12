import java.util.Scanner;
class Pattern2
{
	private int num;
	
	public void setNum(int num)
	{
		this.num=num;
	}
	
	public int getNum()
	{
		return this.num;
	}
	
	public void printAnswer()
	{
		char ch='A';
		for(int i=1;i<num;i++)
		{
			ch='A';
			for(int j=num-i;j>=1;j--)
			{
				System.out.print(" ");
			}
			int j=0;
			for(j=1;j<=i;j++,ch++)
			{
				System.out.print(ch);
			}
			ch=(char)(ch-2);
			for(j=j-1;j>1;j--,ch--)
			{
				System.out.print(ch);
			}
			System.out.println();
		}
			
	}
	
	public void inputNum()
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Number : ");
		int num = sc.nextInt();
		setNum(num);
	}
	
	public static void main(String[] ar)
	{
		Pattern2 ob = new Pattern2();
		ob.inputNum();
		ob.printAnswer();
	}
}