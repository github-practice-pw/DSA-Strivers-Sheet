/*
 * Merge Sort - Divide and Merge
 * 
 * Time complexity in Average, best and worst case scenario is O(NlogN)
 * Space complexity (Worst case) = O(N)
 * 
 * 
 */
#include<iostream>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;

    int left = low;
    int right = mid+1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high ; i++) {
        arr[i] = temp[i-low];
    }
 
}

void mS(vector<int> &arr, int low, int high) {
    if (low == high) return;

    int mid = (low + high)/2;

    mS(arr, low, mid);
    mS(arr, mid+1, high);
    merge(arr, low, mid, high);
}
void merge_sort(vector<int> &arr, int n) {
    mS(arr, 0, n-1);
}

int main() {

    // Initializing the inputs
    int n_count = 6;


    vector<int> arr;

    arr.push_back(13);
    arr.push_back(46);
    arr.push_back(24);
    arr.push_back(52);
    arr.push_back(20);
    arr.push_back(9);
    

    // Sorting algorithm
    merge_sort(arr, n_count);

    //Display stuff

    for(int i = 0; i < n_count; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}