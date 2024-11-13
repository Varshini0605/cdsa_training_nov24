public class InsertionSort {
    public static void insertionSort(int[] array) {
        int n = array.length;

        for (int i = 1; i < n; i++) {
            int key = array[i];
            int j = i - 1;

            // Move elements of array[0..i-1] that are greater than key to one position ahead
            // of their current position
            while (j >= 0 && array[j] > key) {
                array[j + 1] = array[j];
                j = j - 1;
            }
            array[j + 1] = key;
        }
    }

    public static void main(String[] args) {
        int[] array = {64, 34, 25, 12, 22, 11, 90};

        System.out.println("Unsorted array:");
        for (int num : array) {
            System.out.print(num + " ");
        }

        insertionSort(array);

        System.out.println("\nSorted array:");
        for (int num : array) {
            System.out.print(num + " ");
        }
    }
}
