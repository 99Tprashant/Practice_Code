import java.lang.*;
import java.util.*;

//create table student(RID int,Name varchar(255),Salary int);
//Database table / schema
class Student
{
	public int RID;
	public String Name;
	public int Salary;
	
	private static int Generator;
	
	static
	{
		Generator = 0;
	}
	
	public Student(String str,int value)
	{
		this.RID = ++Generator;
		this.Name = str;
		this.Salary = value;
	}
	
	public void DisplayData()
	{
		System.out.println(this.RID + "\t" + this.Name + "\t" + this.Salary);
	}
}

class DBMS
{
	public LinkedList<Student> lobj;
	
	public DBMS()
	{
		lobj = new LinkedList<>();
	}
	
	public void StartDBMS()
	{
		System.out.println("Marvellous Customised DBMS started Sucessfully...");	
	}
	
	public void InsertData(String str, int value)
	{
		Student sobj = new Student(str,value);
		lobj.add(sobj);
	}
	
	public void DisplayAll()
	{
		for(Student sref : lobj)
		{
			sref.DisplayData();
		}
	}
	
	public void DisplaySpecific(int rid)
	{
		System.out.println(" ................Data by Rid of Student...............");
		
		for(Student sref : lobj)
		{
			if(sref.RID == rid)
			{
				sref.DisplayData();
				break;
			}
			else
			{
				System.out.println(" Your entered  Rid is invalide");
			}
		}
	}
	
	public void DisplaySpecific(String str)
	{
		System.out.println("..................Data by Name of Student..................");
		
		for(Student sref : lobj)
		{
			if(str.equals(sref.Name))
			{
				sref.DisplayData();
				break;
			}
			else
			{
				System.out.println(" Your entered  Name is invalide");
			}
		}
	}
	
	public void DeleteSpecific(int rid)
	{
		int index = 0;
		
		for(Student sref : lobj)
		{
			if(sref.RID == rid)
			{
				lobj.remove(index);
				break;
			}
			index++;
		}
	}
	
	public void DeleteSpecific(String str)
	{
		int index = 0;
		
		for(Student sref : lobj)
		{
			if(str.equals(sref.Name))
			{
				lobj.remove(index);
				break;
			}
			index++;
		}
	}
	
}

class Program364
{
	public static void main(String arg[])
	{
			DBMS dobj = new DBMS();
			
			dobj.StartDBMS();
			dobj.InsertData("Piush",1000);
			dobj.InsertData("Sakshi",2000);
			dobj.InsertData("Sachin",3000);
			
			System.out.println("..................All Data in DBMS..................");
			System.out.println("RID"    + "\t" + "NAME"    + "\t" + "SALARY"   );
			dobj.DisplayAll();
			
			dobj.DeleteSpecific("Piush");
			System.out.println("..................All Data in DBMS..................");
			System.out.println("RID"    + "\t" + "NAME"    + "\t" + "SALARY"   );
			dobj.DisplayAll();
	}
}