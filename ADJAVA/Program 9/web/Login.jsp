<%-- 
    Document   : Login
    Created on : 17 Jan, 2023, 2:33:36 PM
    Author     : mcacnj
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <%
            String user="Admin";
            String password="vcet123";
            String name=(request.getParameter("user")).trim();
            String pass=(request.getParameter("pass")).trim();
            if(name.equals(user)&&pass.equals(password))
            {
           %>
           <h1><center>WELCOME TO MAIN PAGE
                   <p>USER SUCCESSFULLY LOGGED IN</p>
                   <form action="Direct.jsp">
                       <input type="submit" value="GetError">
                   </form>
                   <p><a href="Home.jsp">BACK</a></p>
               </center></h1>
           <%
               }
else
{
%>
<h1><b><i>Invalid User</i></b></h1>
<%
}
%>
    </body>
</html>
