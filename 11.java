import java.util.*;
/*
INPUT  :   5
OUTPUT :   5432*
           543*1
           54*21
           5*321
           *4321
           
INPUT  :   3
OUTPUT :   32*
           3*1
           *21

INPUT  :   1
OUTPUT :   *
*/
class GFG {
	public static void main (String[] args) {
		
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
	
	
    	for(int i=1;i<=n;i++)
    	{
    	   for(int j=n;j>=1;j--)
    	   {
    	       if(j==i)
    	         System.out.print("*");
    	         else  System.out.print(j);
    	   }
    	       
    	   
    	   System.out.println();
    	}
	}
}


