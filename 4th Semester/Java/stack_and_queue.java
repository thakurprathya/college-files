//Create a java program to implement stack and queue concept. 
import java.util.Stack;
import java.util.LinkedList;

public class stack_and_queue {
	public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();
        stack.push(1);
        stack.push(2);
        stack.push(3);
        System.out.println("Stack: " + stack);
        System.out.println("Popped element: " + stack.pop());
        System.out.println("Stack after popping: " + stack);

        LinkedList<Integer> queue = new LinkedList<>();
        queue.add(1);
        queue.add(2);
        queue.add(3);
        System.out.println("Queue: " + queue);
        System.out.println("Removed element: " + queue.remove());
        System.out.println("Queue after removing: " + queue);
    }
}