public class DoublyLinkedList {
    // Inner Node class representing each element in the list
    private class Node {
        int data;
        Node next;
        Node prev;

        Node(int data) {
            this.data = data;
        }
    }

    private Node head;
    private Node tail;

    // Add a node to the end of the list
    public void add(int data) {
        Node newNode = new Node(data);
        if (head == null) { // Empty list
            head = tail = newNode;
        } else {
            tail.next = newNode;
            newNode.prev = tail;
            tail = newNode;
        }
    }

    // Remove a node with the specified data
    public boolean remove(int data) {
        Node current = head;
        while (current != null) {
            if (current.data == data) {
                if (current == head) { // Node to remove is head
                    head = head.next;
                    if (head != null) {
                        head.prev = null;
                    }
                } else if (current == tail) { // Node to remove is tail
                    tail = tail.prev;
                    tail.next = null;
                } else { // Node to remove is in the middle
                    current.prev.next = current.next;
                    current.next.prev = current.prev;
                }
                return true;
            }
            current = current.next;
        }
        return false; // Node not found
    }

    // Check if the list contains a node with the specified data
    public boolean contains(int data) {
        Node current = head;
        while (current != null) {
            if (current.data == data) {
                return true;
            }
            current = current.next;
        }
        return false;
    }

    // Print list in forward direction
    public void printForward() {
        Node current = head;
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
    }

    // Print list in backward direction
    public void printBackward() {
        Node current = tail;
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.prev;
        }
        System.out.println();
    }

    // Main method to test the DoublyLinkedList class
    public static void main(String[] args) {
        DoublyLinkedList list = new DoublyLinkedList();

        // Test adding elements
        list.add(10);
        list.add(20);
        list.add(30);

        System.out.print("List after adding elements (Forward): ");
        list.printForward();  // Expected output: 10 20 30

        System.out.print("List after adding elements (Backward): ");
        list.printBackward(); // Expected output: 30 20 10

        // Test contains method
        System.out.println("Contains 20? " + list.contains(20));  // Expected: true
        System.out.println("Contains 40? " + list.contains(40));  // Expected: false

        // Test removing elements
        System.out.println("Removing 20: " + list.remove(20));   // Expected: true
        System.out.print("List after removing 20 (Forward): ");
        list.printForward();  // Expected: 10 30

        System.out.println("Removing 40 (nonexistent): " + list.remove(40)); // Expected: false
        System.out.print("List after trying to remove 40 (Forward): ");
        list.printForward();  // Expected: 10 30
    }
}