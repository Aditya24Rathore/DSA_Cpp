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

int main() {

    int arrsize;
    cout << "Enter Size of Array: ";
    cin >> arrsize;
    int arr[arrsize];
    cout << "Enter the Value of Array: ";
    
    for(int i = 0; i < arrsize; i++) {
        cin >> arr[i];
    }

    // Select Minimum in array
    // Time Complexity {Worst & Avg & Best Case: O(n^2)}
    Selection_Sort(arr, arrsize);


    // Pushes the max to the last by adjacent swap
    // Time Complexity {Worst & Avg Case: O(n^2) || Best Case: O(n)}
    bubble_sort(arr, arrsize);


    // Takes an element & place it in it's current order
    // Time Complexity {Worst & Avg Case: O(n^2) || Best Case: O(n)}
    insertion_sort(arr, arrsize);

    for(int i = 0; i < arrsize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}