//Write an application that executes two threads. One thread displays “An” every 1000 milliseconds and other displays “B” every 3000 milliseconds. Create the threads by extending the Thread class.
public class Lab8_2 {
    public static void main(String[] args) {
        // Create and start threads
        Thread thread1 = new Thread(new ThreadA());
        Thread thread2 = new Thread(new ThreadB());
        thread1.start();
        thread2.start();
    }
}

class ThreadA extends Thread {
    public void run() {
        while (true) {
            System.out.println("An");
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

class ThreadB extends Thread {
    public void run() {
        while (true) {
            System.out.println("B");
            try {
                Thread.sleep(3000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
