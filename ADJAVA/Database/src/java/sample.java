/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author mcacnj
 */
import java.io.*;
import java.sql.*;

public class sample 
{
    sample s=new sample();
    static Connection con=null;
    static ResultSet rs=null;
    static Statement st=null;
    static void DbConnection()
    {
        try
        {
        System.out.println("Inside try");
        Class.forName("org.apache.derby.jdbc.ClientDriver");
        System.out.println("Inside try after class.forName");
        con=DriverManager.getConnection("jdbc:derby://localhost:1527/student"," Manisha","123");
        System.out.println("Inside try after getConnection");
        st=con.createStatement();
        
    }   
    catch(ClassNotFoundException e1)
    {
                System.out.println("error"+e1.getMessage());
            }
            catch(SQLException e2)
            {
                System.out.println(e2.getMessage());
            }
    }

static void InsertRecord() throws IOException,SQLException
{
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter USN");
int s1=Integer.parseInt(br.readLine());

System.out.println("Enter Name ");
String s2=br.readLine();

System.out.println("Enter Sem");
String s3=br.readLine();

System.out.println("Enter age");
int s4=Integer.parseInt(br.readLine());

st.executeUpdate("insert into APP.STUDENTS values("+s1+",'"+s2+"','"+s3+","+s4+")");
System.out.println("Record Added");
    }

static void DeleteRecord() throws IOException,SQLException
        {
         BufferedReader br=new BufferedReader(new InputStreamReader(System.in));  
         sample.ViewRecord();
         System.out.println("Enter the USN to delete");
         int s1=Integer.parseInt(br.readLine());
         int a=st.executeUpdate("Delete from APP.STUDENTS where USN="+s1+"");
               if(a>0)
                   System.out.println("Record Deleted");
               else
                   System.out.println("USN Not found");
        }
static void UpdateREcord()
{
    try
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));  
        sample.ViewRecord();
        System.out.println("Enter the USN to updated");
        int s1=Integer.parseInt(br.readLine());
        
        System.out.println("Enter Name ");
        String s2=br.readLine();

        System.out.println("Enter Sem");
        String s3=br.readLine();

        System.out.println("Enter age");
        int s4=Integer.parseInt(br.readLine());
        
        int executeUpdate=st.executeUpdate("Update APP.STUDENTS SET " 
                + "s_name='"+s2+"' sem='"+s3+"' age="+s4+" where usn='"+s1+"'");
        
        if(executeUpdate>0)
            System.out.println("REcord Updated");
        else
            System.out.println("Record Not Updated");
                    }
    catch(SQLException e)
    {
        System.out.println(e.getMessage());
                    
    }
    catch(IOException e)
    {
        System.out.println(e.getMessage());
        
    }
         
        }

 static void ViewRecord() throws IOException,SQLException
        {
         rs=st.executeQuery("select * from APP.SRUDENTS");
         Boolean t=rs.next();
         if(!t)
         System.out.println("No records");
         else
         {
         System.out.println("USN NAME SEMESTER AGE");
         do
         {
             System.out.println(""+rs.getString(1)+"..."+rs.getString(2)+"..."+rs.getString(3)+"..."+rs.getString(4));
         }
         while(rs.next());
                 }
         }
 public static void main(String [] args)
 {
     try
     {
         DbConnection();
         BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
         while(true)
         {
             System.out.println("1.Insert Record");
             System.out.println("2.DElete Record");
             System.out.println("3.View Record");
             System.out.println("4.Update Record");
             System.out.println("5.Exit");
             System.out.println("6.Enter ur choice");
             int ch=Integer.parseInt(br.readLine());
             switch(ch)
             {
                 case 1:InsertRecord();
                    break;
                 case 2: DeleteRecord();
                     break;
                 case 3: UpdateREcord();
                    break;
                 case 4: ViewRecord();
                    break;
                 case 5: System.exit(0);
                 default:break;
                 
                 
                 
             }
         }
 
      }
     catch(Exception e)
     {
         System.out.println(e.getMessage());
         
     }             
   }
}