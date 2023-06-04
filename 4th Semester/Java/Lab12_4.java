// // Create a servlet that uses Cookies to store the number of times a user has visited your servlet.
// import javax.servlet.ServletException;
// import javax.servlet.annotation.WebServlet;
// import javax.servlet.http.*;

// import java.io.IOException;
// import java.io.PrintWriter;

// @WebServlet("/visitCounterServlet")
// public class VisitCounterServlet extends HttpServlet {

//     protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
//         // Get the current count from the cookie
//         int visitCount = 0;
//         Cookie[] cookies = request.getCookies();
//         if (cookies != null) {
//             for (Cookie cookie : cookies) {
//                 if (cookie.getName().equals("visitCount")) {
//                     visitCount = Integer.parseInt(cookie.getValue());
//                     break;
//                 }
//             }
//         }

//         // Increase the visit count by 1
//         visitCount++;

//         // Set the new count in the cookie
//         Cookie cookie = new Cookie("visitCount", String.valueOf(visitCount));
//         cookie.setMaxAge(24 * 60 * 60); // 24 hours
//         response.addCookie(cookie);

//         // Send the response to the user
//         response.setContentType("text/html");
//         PrintWriter out = response.getWriter();

//         out.println("<html>");
//         out.println("<head><title>Visit Counter</title></head>");
//         out.println("<body>");
//         out.println("<h1>Visit Counter</h1>");
//         out.println("<p>You have visited this servlet " + visitCount + " times.</p>");
//         out.println("</body>");
//         out.println("</html>");

//         out.close();
//     }
// }
