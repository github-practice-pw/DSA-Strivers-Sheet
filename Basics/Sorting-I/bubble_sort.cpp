/*
 * Bubble Sort : Find max and have adjacent swaps
 * Time complexity : n + (n-1) + (n-2) + ....
 * 
 * Worst(Average) complexity : 0(N^2)
 * 
 * Best case : O(N)
 */
#include<iostream>

using namespace std;
void bubble_sort(int arr[], int n);

int main() {

    // Getting the inputs
    int elements = 0;
    cin >> elements;

    int arr[elements];

    for(int i = 0; i < elements; i++) {
        cin >> arr[i];
    }

    // Sorting Algorithm
    bubble_sort(arr, elements);

    // Display Stuff

    for(int i = 0; i < elements; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

void bubble_sort(int arr[], int n){
    for(int i = n - 1; i >= 0; i--) {
        int swap = 0;
        for(int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;
            }
        }
        if (swap == 0) {
            break;
        }
    }
}