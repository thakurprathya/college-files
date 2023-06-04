// Create a servlet that prints all the request headers it receives, along with their associated values.
// import javax.servlet.ServletException;
// import javax.servlet.annotation.WebServlet;
// import javax.servlet.http.HttpServlet;
// import javax.servlet.http.HttpServletRequest;
// import javax.servlet.http.HttpServletResponse;
// import java.io.IOException;
// import java.io.PrintWriter;
// import java.util.Enumeration;

// @WebServlet("/headerServlet")
// public class HeaderServlet extends HttpServlet {

//     protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
//         response.setContentType("text/html");
//         PrintWriter out = response.getWriter();

//         out.println("<html>");
//         out.println("<head><title>Request Headers</title></head>");
//         out.println("<body>");
//         out.println("<h1>Request Headers</h1>");

//         Enumeration<String> headerNames = request.getHeaderNames();
//         while (headerNames.hasMoreElements()) {
//             String headerName = headerNames.nextElement();
//             String headerValue = request.getHeader(headerName);
//             out.println("<p>" + headerName + ": " + headerValue + "</p>");
//         }

//         out.println("</body>");
//         out.println("</html>");

//         out.close();
//     }
// }
