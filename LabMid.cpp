#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key) {
            return mid; // found
        }
        else if (arr[mid] < key) {
            left = mid + 1; // search right side
        }
        else {
            right = mid - 1; // search left side
        }
    }

    return -1; // not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = 6;
    int key = 8;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Found at index: " << result;
    else
        cout << "Not found";

    return 0;
}