import java.util.*;
public class Main
{
	public static void main(String[] args) 
	{
	    Scanner in=new Scanner(System.in);
	    String str=in.next(); 
	    int i = 0;
        for(char c: str.toCharArray()) 
        {
         i++;
        }
      System.out.print(i);
	 }
}
