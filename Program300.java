import java.lang.*;
import java.util.*;
import java.io.*;

class Program300
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
		 
		 String HeaderString = null;
		 String tokens[];
		 
		 int ret = 0;
		 
		 while((ret=fiobj.read(Headerarray,0,100))>0)
		 {
			HeaderString = new String(Headerarray);
			tokens[] = HeaderString.split(" ");
			
			File fobjnew = new File(tokens[0]);
			boolean bobj
		 }
		 
        }
        catch(Exception obj)
        {
            System.out.println(obj);
        }
    }
}