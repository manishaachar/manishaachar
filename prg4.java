public class prg4 {
    public static void main(String[] args) {
        Student s=new Student();//object creation..
        s.getdata(10,"Manisha");
        s.printdata();
}
}

class Student
{
    private  int USN;
    private String Name;
    void getdata(int USN,String Name)
    {
        this.USN=USN;
        this.Name=Name;
    } 

void printdata()
{
    System.out.println(USN);
    System.out.println(Name);
}
}


    
  