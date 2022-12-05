#include <iostream>

using namespace std;

void swap(int & x, int & y) {
    int temp = x;
    x = y;
    y = temp;
}

class maxHeap {
public:
    int *arr; // pointer to array of elements in heap
    int capacity; // maximum possible size of min heap
    int size; // Current number of elements in min heap

    maxHeap() {
        size = 0;
        capacity = 3060;
        arr = new int[3060];
    }

    int parent(int i) {
        return (i - 1) / 2;
    }

    int getMax() {
        return arr[0];
    }

    void insertState(int powerConsumption) {
        if (size == capacity) {
            cout << "HEAP IS FULL";
            return;
        }

        // First insert the new key at the end
        size++;
        int i = size - 1;
        arr[i] = powerConsumption;

        // Fix the min heap property if it is violated
        while (i != 0 && arr[parent(i)] < arr[i]) {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    // Method to remove maximum element (or root) from max heap
    int* extractMax(int arr[], int size) {
        //code from stepik - Heap Remove
        //reassign the last item in the array to be the first.
        arr[0] = arr[--size];
        heapify(arr, size);
        return arr;
    }

    // A recursive method to heapify a subtree with the root at given index
    // This method assumes that the subtrees are already heapified
    void heapify(int arr[], int size) {
        int index = 0;
        //declare variables on the left and right to see which is bigger
        int left, right;
        int biggest = index;
        while (biggest < size) {

            //get the right positions
            left = 2 * index + 1;
            right = 2 * index + 2;

            //check the left side
            if (left < size && arr[left] > arr[biggest]) {
                biggest = left;
            }

            //check the right side
            if (right < size && arr[right] > arr[biggest]) {
                biggest = right;
            }
            //check if the biggest is not index
            //if it isn't then swap the info
            if (biggest != index){

                int temp = arr[index];
                arr[index] = arr[biggest];
                arr[biggest] = temp;
                index = biggest;
                continue;
            }
            break;
        }
    }
};