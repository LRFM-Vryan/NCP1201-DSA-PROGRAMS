#include <iostream>
#include <vector>
using namespace std;

// An optimized version of Bubble Sort 
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
  
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
      
        // If no two elements were swapped, then break
        if (!swapped)
            break;
    }
}

int main() {
    vector<int> arr = { 5, 6, 1, 3 };
    bubbleSort(arr); 
    for (int num : arr)
        cout << num << " ";
}

//To fully understand the code, please add a breaking point at line 11, 13, 15 to understand how the
//loop is working and how the swapping is done.
// the program demonstrates an optimized Bubble Sort algorithm that stops early if the array is already sorted,
// improving efficiency in best-case scenarios.
// The time complexity of this optimized Bubble Sort is O(n) in the best case (when
// the array is already sorted) and O(n^2) in the average and worst cases.
// The space complexity remains O(1) as it is an in-place sorting algorithm.
// where n is the number of elements in the array to be sorted.
// The optimization checks if any swaps were made during a pass through the array.
// If no swaps were made, the array is already sorted, and the algorithm terminates early.
// This reduces unnecessary passes through the array, enhancing performance
// for nearly sorted arrays.
// Example: For the input array {5, 6, 1, 3}, the output will be {1, 3, 5, 6}.
// The program sorts the array in ascending order using the Bubble Sort algorithm.
// The outer loop runs n-1 times, where n is the number of elements in the array.
// The inner loop compares adjacent elements and swaps them if they are in the wrong order.
// The swapped flag is used to track if any swaps were made during the inner loop.
// If no swaps were made, the algorithm breaks out of the loop early, indicating that the
// array is already sorted.