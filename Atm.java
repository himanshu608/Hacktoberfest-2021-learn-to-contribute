/* Link to question- https://www.codechef.com/problems/HS08TEST*/
import java.util.*;
import java.lang.*;
import java.io.*;

class atm
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc=new Scanner(System.in);
	    double a=sc.nextDouble();
	    double am=sc.nextDouble();
	    if(a%5!=0||(a+0.5)>am)
	    System.out.println(am);
	    else
	   { double d=(am-a-0.5);
	    System.out.println(d);
	
	}
}
}
