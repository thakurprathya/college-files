// // Write a servlet to display “My first servlet program” on browser.
// import javax.servlet.ServletException;
// import javax.servlet.annotation.WebServlet;
// import javax.servlet.http.HttpServlet;
// import javax.servlet.http.HttpServletRequest;
// import javax.servlet.http.HttpServletResponse;
// import java.io.IOException;
// import java.io.PrintWriter;

// @WebServlet("/firstServlet")
// public class Lab12_1 extends HttpServlet {

//     protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
//         response.setContentType("text/html");
//         PrintWriter out = response.getWriter();

//         out.println("<html>");
//         out.println("<head><title>My First Servlet</title></head>");
//         out.println("<body>");
//         out.println("<h1>My first servlet program</h1>");
//         out.println("</body>");
//         out.println("</html>");

//         out.close();
//     }
// }
