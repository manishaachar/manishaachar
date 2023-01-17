<%-- 
    Document   : Home
    Created on : 17 Jan, 2023, 2:21:49 PM
    Author     : mcacnj
--%>

<%@page contentType="text/html" pageEncoding="UTF-8" autoFlush="true" language="java" 
        import="java.util.Date" info="student information" session="true" isErrorPage="true" errorPage="Error.jsp"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>LOGIN PAGE</title>
    </head>
    <body>
        <form action="Login.jsp">
            <table>
                <tr>
                    <td>Enter name:</td>
                    <td><input type="name" name="user"/></td>
                </tr>
                
                <tr>
                    <td>Enter Password:</td>
                    <td><input type="password" name="pass"/></td>
                </tr>
                
                <tr>
                    <td>
                        <input type="submit" name="submit" value="Login"/></td>
                    
                </tr>
                
            </table>
            
        </form>
       
    </body>
</html>
