#include <iostream>
#include <algorithm> // for sort()
using namespace std;


int binarySearchIterative(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid; // element found
        }
        else if (arr[mid] < key) {
            start = mid + 1; 
        }
        else {
            end = mid - 1; 
        }
    }
    return -1; // not found
}
int binarySearchRecursive(int arr[], int start, int end, int key) {
    if (start > end) {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == key) {
        return mid;
    }
    else if (arr[mid] < key) {
        return binarySearchRecursive(arr, mid + 1, end, key);
    }
    else {
        return binarySearchRecursive(arr, start, mid - 1, key);
    }
}


int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\nEnter element to search: ";
    cin >> key;
    int result1 = binarySearchIterative(arr, n, key);

    if (result1 != -1) {
        cout << "\n[Iterative] Element found at index: " << result1;
    } else {
        cout << "\n[Iterative] Element not found.";
    }
    int result2 = binarySearchRecursive(arr, 0, n - 1, key);
    if (result2 != -1) {
        cout << "\n[Recursive] Element found at index: " << result2;
    } else {
        cout << "\n[Recursive] Element not found.";
    }
    return 0;

}

