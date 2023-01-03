<%-- 
    Document   : file2
    Created on : 3 Jan, 2023, 3:28:19 PM
    Author     : mcacnj
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Student Information</title>
    </head>
    <body>
    <center><br><br><br><br>
        <b>STUDENT DETAILS RETRIVED FROM STUDENT</b>
        <jsp:useBean id="stud" scope="session" class="program.StudentBean"/>
        <table>
            <tr>
                <td>Student Name:<jsp:getProperty name="stud" property="name"/></td>
            </tr>
            <tr>
                <td>Student usn:<jsp:getProperty name="stud" property="usn"/></td>
            </tr><tr>
                <td>Student branch:<jsp:getProperty name="stud" property="branch"/></td>
            </tr><tr>
                <td>email id:<jsp:getProperty name="stud" property="email"/></td>
            </tr><tr>
                <td>phone:<jsp:getProperty name="stud" property="phone"/></td>
            </tr>
        </table>
    </body>
</html>
