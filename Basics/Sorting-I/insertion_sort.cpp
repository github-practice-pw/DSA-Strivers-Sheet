/*
 * Insertion Sort - Swaps to it's position
 * 
 * Time complexity in worst case scenario is O(N^2)
 * Best case : O(N)
 */
#include<iostream>

using namespace std;

void insertion_sort(int arr[], int n) {
    for(int i = 0; i <= n-1; i++) {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j]) { // Keep swapping as long as you find the left element to be smaller
            int temp  = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main() {

    // Initializing the inputs
    int n_count = 0;
    cin >> n_count;

    int arr[n_count];
    for(int i = 0; i < n_count; i++) {
        cin >> arr[i];
    }

    // Sorting algorithm
    insertion_sort(arr, n_count);

    //Display stuff

    for(int i = 0; i < n_count; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}