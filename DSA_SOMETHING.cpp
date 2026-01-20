#include <iostream>
#include <vector>
#include <chrono>
#include <stack>
#include <queue>
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

void insertionsort(vector<int>& arr, int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        // move elements greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

vector<int> countsort(vector<int>& arr) {
    int n = arr.size();

    // find the maximum element
    int maxval = 0;
    for (int i = 0; i < n; i++)
        maxval = max(maxval, arr[i]);

    // create and initialize count array
    vector<int> count(maxval + 1, 0);

    // count frequency of each element
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    // compute prefix sum
    for (int i = 1; i <= maxval; i++)
        count[i] += count[i - 1];

    // build output array
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--) {
        ans[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    return ans;
}

int main() {
    int ArrValues[10] = {58, 21, 45, 32, 41, 60, 39, 50, 29, 33};
    
        // Output values using for loop
    cout << "For Loop Output:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << ArrValues[i] << " ";
    }
    cout << endl << endl;

    // Create a stack
    stack<int> StockValues;
    
    // Push all values onto the stack
    for (int i = 0; i < 10; i++) {
        StockValues.push(ArrValues[i]);
    }
    // The StockValues.push() function is used to add elements of the array to the stack.
      
    // Pop 3 values and output remaining
    for (int i = 0; i < 3; i++) {
        StockValues.pop();
    }
    // The iteration of i is used to pop three values from the stack.
    
    // Store remaining stack values for merging
    vector<int> StackRemaining;
    cout << "Remaining values in stack:" << endl;
    while (!StockValues.empty()) {
        int val = StockValues.top();
        StackRemaining.push_back(val);
        cout << val << " ";
        StockValues.pop();
    }
    cout << endl << endl;
    // the !StockValues.empty() condition checks if the stack is not empty
    // the stack uses the LIFO principle to store the values and output 
    // them in reverse order after popping three values.
    
    // Create a queue
    queue<int> QueueValues;
    
    // Push all values into the queue
    for (int i = 0; i < 10; i++) {
        QueueValues.push(ArrValues[i]);
    }
    // The QueueValues.push() function is used to add elements of the array to the queue.

    // Dequeue 3 values and output remaining
    for (int i = 0; i < 3; i++) {
        QueueValues.pop();
    }
    // The iteration of i is used to dequeue three values from the queue.
    
    // Store remaining queue values for merging
    vector<int> queueRemaining;
    cout << "Remaining values in queue:" << endl;
    while (!QueueValues.empty()) {
        int val = QueueValues.front();
        queueRemaining.push_back(val);
        cout << val << " ";
        QueueValues.pop();
    }
    cout << endl << endl;
    // the !QueueValues.empty() condition checks if the queue is not empty
    // the queue uses the FIFO principle to store the values and output
    // them in the same order after dequeuing three values.
    
    // Merge stack and queue values
    vector<int> Merged;
    
    // Add stack values first
    for (int val : StackRemaining) {
        Merged.push_back(val);
    }
    
    // Add queue values
    for (int val : queueRemaining) {
        Merged.push_back(val);
    }
    
    cout << "Merged data (Stack + Queue):" << endl;
    for (int val : Merged) {
        cout << val << " ";
    }
    cout << endl << endl;
    
    // Time the bubble sort
    auto start = chrono::high_resolution_clock::now();
    
    // Sort the merged data using bubble sort
    bubbleSort(Merged);
    
    auto end = chrono::high_resolution_clock::now();
    
    cout << "Sorted data (Bubble Sort):" << endl;
    for (int val : Merged)
        cout << val << " ";
    cout << endl << endl;
    
    cout << "Bubble Sort Time (ms): "
         << chrono::duration_cast<chrono::milliseconds>(end - start).count()
         << endl;
    cout << "Bubble Sort Time Complexity: O(n^2)" << endl;
    
    return 0;
}