#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    if (n <= 0) {
        printf("No elements to search.\n");
    } else {
        for (int i = 0; i < n; i++) {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
        
        printf("Enter number to be searched: ");
        scanf("%d", &key);
        
        int result = binarySearch(arr, n, key);
        if (result != -1) {
            printf("Element found at index %d\n", result);
        } else {
            printf("Element not found\n");
        }
    }
    
    return 0;
}
