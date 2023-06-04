// Write a servlet to show all the parameters sent to the servlet via either GET or POST
// import javax.servlet.ServletException;
// import javax.servlet.annotation.WebServlet;
// import javax.servlet.http.HttpServlet;
// import javax.servlet.http.HttpServletRequest;
// import javax.servlet.http.HttpServletResponse;
// import java.io.IOException;
// import java.io.PrintWriter;
// import java.util.Enumeration;

// @WebServlet("/parameterServlet")
// public class ParameterServlet extends HttpServlet {

//     protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
//         processRequest(request, response);
//     }

//     protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
//         processRequest(request, response);
//     }

//     private void processRequest(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
//         response.setContentType("text/html");
//         PrintWriter out = response.getWriter();

//         out.println("<html>");
//         out.println("<head><title>Request Parameters</title></head>");
//         out.println("<body>");
//         out.println("<h1>Request Parameters</h1>");

//         Enumeration<String> parameterNames = request.getParameterNames();
//         while (parameterNames.hasMoreElements()) {
//             String paramName = parameterNames.nextElement();
//             String[] paramValues = request.getParameterValues(paramName);
//             out.println("<p>" + paramName + ": ");
//             for (String paramValue : paramValues) {
//                 out.println(paramValue + " ");
//             }
//             out.println("</p>");
//         }

//         out.println("</body>");
//         out.println("</html>");

//         out.close();
//     }
// }
