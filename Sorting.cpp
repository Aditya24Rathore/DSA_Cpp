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

int partition(vector<int> &array, int low, int high) {
    int pivot = array[low];
    int i = low;
    int j = high;
    while(i < j) {
        while(array[i] <= pivot && i <= high - 1) {
            i++;
        }

        while(array[j] > pivot && j >= low + 1) {
            j--;
        }
        if(i < j) swap(array[i], array[j]);
    }
    swap(array[low], array[j]);
    return j;
}

void quickSort(vector<int> &array, int low, int high) {
    if(low < high) {
        int pIndex = partition(array, low, high);
        quickSort(array, low, pIndex - 1);
        quickSort(array, pIndex + 1, high);
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

    // Picks the minimum element each pass and places it correctly
    // Time: O(n^2) | Space: O(1)
    Selection_Sort(arr, arrsize);


    // Repeatedly swaps adjacent elements to push max to the end
    // Time: O(n^2) avg/worst, O(n) best | Space: O(1)
    bubble_sort(arr, arrsize);


    // Inserts each element into its correct position in the sorted part
    // Time: O(n^2) avg/worst, O(n) best | Space: O(1)
    insertion_sort(arr, arrsize);

    vector<int> array(arrsize);
    cout << "Enter the Value of Array: ";
    
    for(int i = 0; i < arrsize; i++) {
        cin >> array[i];
    }
    
    // Divides array and merges subarrays in sorted order
    // Time: O(n log n) | Space: O(n)
    mergeSort(array, 0, arrsize-1);

    // Places pivot at correct position and partitions the array around it
    // Time: O(n log n) avg/best, O(n^2) worst | Space: O(log n) avg
    quickSort(array, 0, arrsize-1);

    for(int i = 0; i < arrsize; i++) {
        cout << array[i] << " ";
    }

    return 0;
}