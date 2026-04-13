#include <stdio.h>

// Binary search to find the index where 'key' should be inserted
int binarySearch(int arr[], int key, int low, int high) {
    while (low < high) {
        int mid = (low + high) / 2;
        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

// Insertion sort using binary search
void insertionSortBinary(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
       
        int pos = binarySearch(arr, key, 0, i);
        
        
        for (int j = i; j > pos; j--) {
            arr[j] = arr[j - 1];
        }
        arr[pos] = key;
    }
}

int main() {
    int arr[] = {37, 23, 0, 17, 12, 72, 31};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSortBinary(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}