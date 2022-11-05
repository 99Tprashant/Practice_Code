import java.lang.*;
import java.io.*;
import java.util.*;

class Program285
{
	public static void main(String arg[])
	{
	    try
	    {
			Scanner sobj = new Scanner(System.in);
		
			System.out.println("Please enter file name");
			String Filename = sobj.nextLine();
		
			File fobj= new File(Filename);
			boolean bobj = fobj.createNewFile();
		
			if(bobj == true)
			{
				System.out.println("File sucessfully Created");
			}
			else
			{
			System.out.println("File is already existing");
			}
	    }
	    catch(IOException obj)
	    {
			System.out.println(obj);
	    }
	}
}