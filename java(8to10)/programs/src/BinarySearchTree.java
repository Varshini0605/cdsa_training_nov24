public class BinarySearchTree {

    // Node class representing each node in the tree
    static class Node {
        int key;
        Node left, right;

        public Node(int item) {
            key = item;
            left = right = null;
        }
    }

    // Root node of the BST
    Node root;

    // Constructor to initialize an empty BST
    public BinarySearchTree() {
        root = null;
    }

    // Method to insert a new key
    void insert(int key) {
        root = insertRec(root, key);
    }

    // Recursive method to insert a new key in the BST
    Node insertRec(Node root, int key) {
        // If the tree is empty, return a new node
        if (root == null) {
            root = new Node(key);
            return root;
        }

        // Otherwise, recur down the tree
        if (key < root.key) {
            root.left = insertRec(root.left, key);
        } else if (key > root.key) {
            root.right = insertRec(root.right, key);
        }

        // Return the unchanged node pointer
        return root;
    }

    // Method to search for a given key in the BST
    boolean search(int key) {
        return searchRec(root, key);
    }

    // Recursive method to search for a key in the BST
    boolean searchRec(Node root, int key) {
        // Base case: root is null or key is present at root
        if (root == null) {
            return false;
        }
        if (root.key == key) {
            return true;
        }

        // Key is greater than root's key
        if (key < root.key) {
            return searchRec(root.left, key);
        } else {
            return searchRec(root.right, key);
        }
    }

    // Method to perform in-order traversal of the BST
    void inOrderTraversal() {
        inOrderRec(root);
        System.out.println();
    }

    // Recursive method for in-order traversal
    void inOrderRec(Node root) {
        if (root != null) {
            inOrderRec(root.left);
            System.out.print(root.key + " ");
            inOrderRec(root.right);
        }
    }

    // Main function to test the Binary Search Tree
    public static void main(String[] args) {
        BinarySearchTree bst = new BinarySearchTree();

        // Insert elements
        bst.insert(50);
        bst.insert(30);
        bst.insert(20);
        bst.insert(40);
        bst.insert(70);
        bst.insert(60);
        bst.insert(80);

        System.out.println("In-order traversal of the BST:");
        bst.inOrderTraversal();

        // Search for a key
        int keyToSearch = 40;
        if (bst.search(keyToSearch)) {
            System.out.println("Key " + keyToSearch + " found in the BST.");
        } else {
            System.out.println("Key " + keyToSearch + " not found in the BST.");
        }
    }
}
