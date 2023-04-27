//Create class of SalesPersons as a thread that will display fives sales persons name.Create a class as Days as other Thread that has array of seven days.Call the instance of SalesPersons in Days and start both the threads ,suspend SalesPersons on Sunday and resume on wednesday Note: use suspend, resume methods from thread.
class SalesPersons extends Thread {
    private String[] salesPersons = {"John", "Jane", "Bob", "Alice", "Mark"};

    public void run() {
        for (String salesPerson : salesPersons) {
            System.out.println(salesPerson);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

public class Lab8_3 extends Thread {
    private String[] days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    private SalesPersons salesPersonsThread;

    public Lab8_3(SalesPersons salesPersonsThread) {
        this.salesPersonsThread = salesPersonsThread;
    }

    public void run() {
        for (String day : days) {
            System.out.println(day);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }

            if (day.equals("Sunday")) {
                System.out.println("Suspending SalesPersons thread...");
                salesPersonsThread.suspend();
            } else if (day.equals("Wednesday")) {
                System.out.println("Resuming SalesPersons thread...");
                salesPersonsThread.resume();
            }
        }
    }

    public static void main(String[] args) {
        SalesPersons salesPersonsThread = new SalesPersons();
        Lab8_3 daysThread = new Lab8_3(salesPersonsThread);

        salesPersonsThread.start();
        daysThread.start();
    }
}
