//Write a java program to show multithreaded producer and consumer application.
import java.util.LinkedList;

public class Lab8_1 {
    public static void main(String[] args) {
        // Create shared buffer
        Buffer buffer = new Buffer();

        // Create producer and consumer threads
        Thread producerThread = new Thread(new Producer(buffer));
        Thread consumerThread = new Thread(new Consumer(buffer));

        // Start threads
        producerThread.start();
        consumerThread.start();
    }
}

class Buffer {
    private LinkedList<Integer> buffer = new LinkedList<>();
    private final int BUFFER_SIZE = 5;

    public synchronized void produce(int value) throws InterruptedException {
        while (buffer.size() == BUFFER_SIZE) {
            wait();
        }

        buffer.addLast(value);
        System.out.println("Produced " + value);
        notifyAll();
    }

    public synchronized int consume() throws InterruptedException {
        while (buffer.size() == 0) {
            wait();
        }

        int value = buffer.removeFirst();
        System.out.println("Consumed " + value);
        notifyAll();
        return value;
    }
}

class Producer implements Runnable {
    private Buffer buffer;

    public Producer(Buffer buffer) {
        this.buffer = buffer;
    }

    public void run() {
        try {
            for (int i = 0; i < 10; i++) {
                buffer.produce(i);
                Thread.sleep((int) (Math.random() * 100));
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

class Consumer implements Runnable {
    private Buffer buffer;

    public Consumer(Buffer buffer) {
        this.buffer = buffer;
    }

    public void run() {
        try {
            for (int i = 0; i < 10; i++) {
                int value = buffer.consume();
                Thread.sleep((int) (Math.random() * 100));
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
