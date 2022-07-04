//import java.util.Scanner;

import java.sql.Date;

public class emp_demo {
    public static void main(String[] args) {

        Employee e=new Employee();//object creation..
        e.getdata(essn:10, ename, esal, dob);     
        e.printdata();
    }    
}


class Employee
{
   private int essn;
    private String ename;
    private int esal;
    private String dob;
    void getdata(int essn, String ename, int esal,String dob)
    {
        this.essn=essn;
        this.ename=ename;
        this.esal=esal;
        this.dob=dob;
   }
    void printdata()
    {
        System.out.println(essn);
     System.out.println(ename);
        System.out.println(esal);
        System.out.println(dob);
    }
}