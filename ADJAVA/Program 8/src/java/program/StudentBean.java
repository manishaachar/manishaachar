/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package program;
import java.io.Serializable;


   public class StudentBean implements Serializable{
    String name;
    String usn;
    String branch;
    String email;
    String phone;
    public String getname()
    {
        return name;
    }
    public void setname(String name)
    {
        this.name=name;
    }
    public String getbranch()
    {
        return branch;
    }
    public void setbranch(String branch)
    {
        this.branch=branch;
    }
    public String getusn()
    {
        return usn;
    }
    public void setusn(String usn)
    {
        this.usn=usn;
    }
    public String getemail()
    {
        return email;
    }
    public void setemail(String email)
    {
        this.email=email;
    }
    public String getphone()
    {
        return phone;
    }
    public void setphone(String phone)
    {
        this.phone=phone;
    }
}
 

