#include <iostream>

using namespace std;

void swap(int & x, int & y) {
    int temp = x;
    x = y;
    y = temp;
}

class minHeap {
public:
    int *arr; // pointer to the array used for the heap
    int capacity; // maximum allowed objects in the heap
    int size; // The size of the heap

    minHeap() {
        size = 0;
        capacity = 3060;
        arr = new int[3060];
    }

    int parent(int i) {
        return (i - 1) / 2;
    }

    int getMin() {
        return arr[0];
    }

    void insertState(int powerConsumption) {
        if (size == capacity) {
            return;
        }
        // First insert the new key at the end
        size++;
        int i = size - 1;
        arr[i] = powerConsumption;
        // Fix the min heap property if it is violated
        while (i != 0 && arr[parent(i)] > arr[i]) {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void extractMin() {
        int index = 0;
        arr[index] = arr[--size];
        int l, r, smallest;

        while(index < size)
        {
            l = index * 2 + 1;
            r = index * 2 + 2;
            smallest = index;

            if(l < size && arr[l] < arr[smallest])
                smallest = l;
            if(r < size && arr[r] < arr[smallest])
                smallest = r;

            if (smallest != index)
            {
                int temp = arr[index];
                arr[index] = arr[smallest];
                arr[smallest] = temp;
                index = smallest;
                continue;
            }
            break;
        }
    }

};