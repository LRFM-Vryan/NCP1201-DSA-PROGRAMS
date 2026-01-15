#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {

        // Assume the current position holds
        // the minimum element
        int min_idx = i;

        // Iterate through the unsorted portion
        // to find the actual minimum
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {

                // Update min_idx if a smaller
                // element is found
                min_idx = j; 
            }
        }

        // Move minimum element to its
        // correct position
        swap(arr[i], arr[min_idx]);
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    selectionSort(arr);

    for (int &val : arr) {
        cout << val << " ";
    }

    return 0;
}

//add a breakpoint in line 15, 21, 27 to understand the code
// Line 15: Start of the outer loop to iterate through each element
// Line 21: Inside the inner loop to find the minimum element in the unsorted portion
// Line 27: After swapping the found minimum element with the first unsorted element