import java.lang.*;
import java.util.*;
import java.io.*;

class Program298
{
    public static void main(String arg[])
    {
        try
        {
          Scanner sobj = new Scanner(System.in);
		  
		System.out.println("Please packed file name");
		String packfilename = sobj.nextLine();
		 
		 File fobj=new File(packfilename);
		 
		 FileInputStream fiobj =new FileInputStream(fobj);
		 byte Headerarray[] = new byte[100];
		 
		 fiobj.read(Headerarray,0,100);
		 
		 String HeaderString = new String(Headerarray);
		 System.out.println(HeaderString);
		 
		 String tokens[] = HeaderString.split(" ");
		 System.out.println("File name: "+tokens[0]);
		 System.out.println("File size: "+tokens[1]);
		 
		 
        }
        catch(Exception obj)
        {
            System.out.println(obj);
        }
    }
}