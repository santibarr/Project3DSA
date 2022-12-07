#include <iostream>
#include "backEnd.h"
#ifndef MINHEAP_H
#define MINHEAP_H

using namespace std;

void swap(int & x, int & y) {
    int temp = x;
    x = y;
    y = temp;
}

class minHeap {
public:
    state *arr; // pointer to the array used for the heap
    int capacity; // maximum allowed objects in the heap
    int size; // The size of the heap

    minHeap() {
        size = 0;
        capacity = 3060;
        arr = new state[3060];
    }

    int parent(int i) {
        return (i - 1) / 2;
    }

    string getMin() {
        return arr[0].name;
    }

    void getTopTen() {
        for (unsigned int i = 0; i < 10; i++) {
            getMin();
        }
    }

    void insertState(state &stateObject) {
        if (size == capacity) {
            return;
        }
        // First insert the new key at the end
        size++;
        int i = size - 1;
        arr[i] = stateObject;
        // Fix the min heap property if it is violated
        while (i != 0 && arr[parent(i)].powerConsumption > arr[i].powerConsumption) {
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

            if(l < size && arr[l].powerConsumption < arr[smallest].powerConsumption)
                smallest = l;
            if(r < size && arr[r].powerConsumption < arr[smallest].powerConsumption)
                smallest = r;

            if (smallest != index)
            {
                state temp = arr[index];
                arr[index] = arr[smallest];
                arr[smallest] = temp;
                index = smallest;
                continue;
            }
            break;
        }
    }
};
#endif

