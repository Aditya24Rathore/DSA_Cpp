#include<bits/stdc++.h>
using namespace std;

void Selection_Sort(int arr[], int arrsize) {
    for(int i = 0; i <= arrsize-2; i++) {
        int min = i;
        for(int j = i; j <= arrsize-1; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void bubble_sort(int arr[], int arrsize) {
    for(int i = arrsize-1; i >= 1; i--) {
        int didSwap = 0;
        for(int j = 0; j <= i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0) {
            break;
        }
    }
}

void insertion_sort(int arr[], int arrsize) {
    for(int i = 0; i <=arrsize-1; i++) {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]) {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

void merge(vector<int> &array, int low, int mid, int high) {
    vector<int> temp;
    // [low...mid]
    // [mid+1...high]
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high) {
        if(array[left] <= array[right]) {
            temp.push_back(array[left]);
            left++;
        }
        else {
            temp.push_back(array[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(array[left]);
        left++;
    }
    while(right <= high) {
        temp.push_back(array[right]);
        right++;
    }

    for(int i = low; i <= high; i++) {
        array[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &array, int low, int high) {
    if(low == high) return;
    int mid = (low + high) / 2;
    mergeSort(array, low, mid);
    mergeSort(array, mid+1, high);
    merge(array, low, mid, high);
}

int main() {

    int arrsize;
    cout << "Enter Size of Array: ";
    cin >> arrsize;

    int arr[arrsize];
    cout << "Enter the Value of Array: ";
    
    for(int i = 0; i < arrsize; i++) {
        cin >> arr[i];
    }

    // Selects the minimum element in each pass and places it at the correct position
    // Time Complexity {Worst & Avg & Best Case: O(n^2)}
    // Space Complexity: O(1)  (in-place sorting)
    Selection_Sort(arr, arrsize);


    // Pushes the maximum element to the end using adjacent swaps
    // Time Complexity {Worst & Avg Case: O(n^2) || Best Case: O(n)}
    // Space Complexity: O(1)  (in-place sorting)
    bubble_sort(arr, arrsize);


    // Takes an element and places it in its correct position in the sorted part
    // Time Complexity {Worst & Avg Case: O(n^2) || Best Case: O(n)}
    // Space Complexity: O(1)  (in-place sorting)
    insertion_sort(arr, arrsize);

    vector<int> array(arrsize);
    cout << "Enter the Value of Array: ";
    
    for(int i = 0; i < arrsize; i++) {
        cin >> array[i];
    }
    
    // Divides the array into single elements and merges them in sorted order
    // Time Complexity: O(n log n) in Worst, Average, and Best cases
    // Space Complexity: O(n)  (extra array used during merging)
    mergeSort(array, 0, arrsize-1);

    for(int i = 0; i < arrsize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}