// // Create a servlet that recognizes visitor for the first time to a web application and responds by saying “Welcome, you are visiting for the first time”. When the page is visited for the second time ,it should say “Welcome Back”.
// import javax.servlet.ServletException;
// import javax.servlet.annotation.WebServlet;
// import javax.servlet.http.*;

// import java.io.IOException;
// import java.io.PrintWriter;

// @WebServlet("/welcomeServlet")
// public class WelcomeServlet extends HttpServlet {

//     protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
//         // Check if the visitor has a returning cookie
//         boolean returningVisitor = false;
//         Cookie[] cookies = request.getCookies();
//         if (cookies != null) {
//             for (Cookie cookie : cookies) {
//                 if (cookie.getName().equals("returningVisitor")) {
//                     returningVisitor = true;
//                     break;
//                 }
//             }
//         }

//         // Set the appropriate message in the response
//         response.setContentType("text/html");
//         PrintWriter out = response.getWriter();

//         out.println("<html>");
//         out.println("<head><title>Welcome</title></head>");
//         out.println("<body>");
//         if (returningVisitor) {
//             out.println("<h1>Welcome Back</h1>");
//         } else {
//             out.println("<h1>Welcome, you are visiting for the first time</h1>");
//             // Set the returning visitor cookie
//             Cookie cookie = new Cookie("returningVisitor", "true");
//             cookie.setMaxAge(24 * 60 * 60); // 24 hours
//             response.addCookie(cookie);
//         }
//         out.println("</body>");
//         out.println("</html>");

//         out.close();
//     }
// }
