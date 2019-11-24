import java.util.Scanner;
public class duplicate
{
	public static void main(String[] args)
	{
		int[] a=new int[20];
		Scanner in=new Scanner(System.in);
		System.out.printf("Enter 20 integer Values : ");
		for(int i=0;i<20;i++)
		{
			a[i]=in.nextInt();
		}
		int cnt=0;
		System.out.print("Your Entered values is : ");
		for(int i=0;i<20;i++)
			System.out.printf("\t%d",a[i]);
		for(int i=0;i<20;i++)
		{
			for(int j=i+1;j<20;j++)
				if(a[i]==a[j])
				{
					
					for(int k=j;k<20-cnt;k++)
					a[k]=a[k+1];
					cnt++;
				}
		}
		System.out.print("\nData is : ");
		for(int i=0;i<20-cnt;i++)
		System.out.printf("\t%d",a[i]);
	}
}