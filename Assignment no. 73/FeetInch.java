import java.util.Scanner;

class FeetInch
{
	int feet,inch;
	public FeetInch(int feet,int inch)
	{
		this.feet=feet;
		this.inch=inch;
	}
	
	FeetInch add(FeetInch temp)
	{
		int cnt=0;
		int inchsum=this.inch+temp.inch;
		while(inchsum>=12)
		{
			//System.out.println(inchsum);
			inchsum=inchsum-12;
			cnt++;
		}
		return (new FeetInch(this.feet+temp.feet+cnt,inchsum));
	}
	
	public static void main(String arg[])
	{
		int feet1,feet2,inch1,inch2;
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter first distance");
		System.out.println("Enter feet:");
		feet1=sobj.nextInt();
		System.out.println("Enter inch:");
		inch1=sobj.nextInt();
		FeetInch obj1=new FeetInch(feet1,inch1);
		
		System.out.println("Enter second distance");
		System.out.println("Enter feet:");
		feet2=sobj.nextInt();
		System.out.println("Enter inch:");
		inch2=sobj.nextInt();
		FeetInch obj2=new FeetInch(feet2,inch2);
		
		FeetInch nobj=obj1.add(obj2);
		
		System.out.println("Total distance is");
		System.out.println("feet : "+nobj.feet);
		System.out.println("inch : "+nobj.inch);
	}
}