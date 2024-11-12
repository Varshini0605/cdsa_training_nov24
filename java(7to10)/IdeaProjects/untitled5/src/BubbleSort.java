public class BubbleSort {

    // Function to perform bubble sort
    public static void bubbleSort(int[] arr) {
        int n = arr.length;

        // Outer loop for each pass through the array
        for (int i = 0; i < n - 1; i++) {
            // Inner loop to compare adjacent elements
            for (int j = 0; j < n - 1 - i; j++) {
                // Swap if the element is greater than the next element
                if (arr[j] > arr[j + 1]) {
                    // Swap the elements
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    // Function to print the array
    public static void printArray(int[] arr) {
        for (int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println();
    }

    // Main method to test the bubble sort
    public static void main(String[] args) {
        int[] arr = {64, 34, 25, 12, 22, 11, 90};

        System.out.println("Unsorted Array:");
        printArray(arr);

        //Perform Bubble Sort
        bubbleSort(arr);

        System.out.println("Sorted Array:");
        printArray(arr);

    }

}