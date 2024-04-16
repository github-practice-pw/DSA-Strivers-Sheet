/*
 * Selection Sort - Select the minimals and swap with whatever the index is at.
 * 
 * Time complexity in Average, best and worst case scenario is O(N^2)
 * n + 
 * 
 */
#include<iostream>

using namespace std;

void selection_sort(int arr[], int n) {
    for(int i = 0; i <= n - 2; i++) {
        int min = i;
        for(int j = i; j <= n-1; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
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
    selection_sort(arr, n_count);

    //Display stuff

    for(int i = 0; i < n_count; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}