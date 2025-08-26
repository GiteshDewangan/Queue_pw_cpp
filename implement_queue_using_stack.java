import java.util.Stack;

class MyQueue {
    Stack<Integer> st;
    Stack<Integer> helper;

    // Constructor
    public MyQueue() {
        st = new Stack<>();
        helper = new Stack<>();
    }

    // Insert element into the queue
    public void push(int x) {
        st.push(x);
    }

    // Remove element from the front of the queue
    public int pop() {
        // Move all elements to helper
        while (!st.isEmpty()) {
            helper.push(st.pop());
        }

        // Remove the top element (front of queue)
        int x = helper.pop();

        // Move back elements to st
        while (!helper.isEmpty()) {
            st.push(helper.pop());
        }

        return x;
    }

    // Get the front element
    public int peek() {
        // Move all elements to helper
        while (!st.isEmpty()) {
            helper.push(st.pop());
        }

        // Front element
        int x = helper.peek();

        // Move back elements to st
        while (!helper.isEmpty()) {
            st.push(helper.pop());
        }

        return x;
    }

    // Check if queue is empty
    public boolean empty() {
        return st.isEmpty();
    }
}


// Example usage
class Main {
    public static void main(String[] args) {
        MyQueue obj = new MyQueue();
        obj.push(10);
        obj.push(20);
        obj.push(30);

        System.out.println(obj.pop());  // 10
        System.out.println(obj.peek()); // 20
        System.out.println(obj.empty()); // false
    }
}
