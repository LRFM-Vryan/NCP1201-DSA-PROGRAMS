#include <iostream>
#include <vector>
#include <chrono>
#include <stack>
#include <queue>
using namespace std;

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

        if (!swapped)
            break;
    }
}
void selectionSort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {

        int min_idx = i;

        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {

                min_idx = j; 
            }
        }

        swap(arr[i], arr[min_idx]);
    }
}
void insertionsort(vector<int>& arr, int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
vector<int> countsort(vector<int>& arr) {
    int n = arr.size();

    int maxval = 0;
    for (int i = 0; i < n; i++)
        maxval = max(maxval, arr[i]);

    vector<int> count(maxval + 1, 0);

    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    for (int i = 1; i <= maxval; i++)
        count[i] += count[i - 1];

    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--) {
        ans[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    return ans;
}
int main() {
    int ArrValues[10] = {58, 21, 45, 32, 41, 60, 39, 50, 29, 33};
    cout << "For Loop Output:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << ArrValues[i] << " ";
    }
    cout << endl << endl;

    stack<int> StackValues;

    for (int i = 0; i < 10; i++) {
        StackValues.push(ArrValues[i]);  }

    for (int i = 0; i < 3; i++) {
        StackValues.pop(); }

    vector<int> StackRemaining;
    cout << "Remaining values in stack:" << endl;
    while (!StackValues.empty()) {
        int val = StackValues.top();
        StackRemaining.push_back(val);
        cout << val << " ";
        StackValues.pop();
    }
    cout << endl << endl;

    queue<int> QueueValues;

    for (int i = 0; i < 10; i++) {
        QueueValues.push(ArrValues[i]);   }

    for (int i = 0; i < 3; i++) {
        QueueValues.pop();    }

    vector<int> queueRemaining;
    cout << "Remaining values in queue:" << endl;
    while (!QueueValues.empty()) {
        int val = QueueValues.front();
        queueRemaining.push_back(val);
        cout << val << " ";
        QueueValues.pop();
    }
    cout << endl << endl;

    vector<int> Merged;

    for (int val : StackRemaining) {
        Merged.push_back(val); }

    for (int val : queueRemaining) {
        Merged.push_back(val); }
    
    cout << "Merged data (Stack + Queue):" << endl;
    for (int val : Merged) {
        cout << val << " ";
    }
    cout << endl << endl;
    
    auto start = chrono::high_resolution_clock::now();
    bubbleSort(Merged);
    
    auto end = chrono::high_resolution_clock::now();
    cout << "Bubble Sort:" << endl;
    for (int val : Merged)
        cout << val << " ";
    cout << endl;
    auto duration_us = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    cout << "Bubble Sort Time (ms): " << duration_us / 100.0 << endl << endl;

    auto start2 = chrono::high_resolution_clock::now();
    selectionSort(Merged);
    
    auto end2 = chrono::high_resolution_clock::now();
    cout << "Selection Sort:" << endl;
    for (int val : Merged)
        cout << val << " ";
    cout << endl;
    auto duration_us2 = chrono::duration_cast<chrono::nanoseconds>(end2 - start2).count();
    cout << "Selection Sort Time (ms): " << duration_us2 / 100.0 << endl << endl;

    auto start3 = chrono::high_resolution_clock::now();
    insertionsort(Merged, Merged.size());
    
    auto end3 = chrono::high_resolution_clock::now();
    cout << "Insertion Sort:" << endl;
    for (int val : Merged)
        cout << val << " ";
    cout << endl;
    auto duration_us3 = chrono::duration_cast<chrono::nanoseconds>(end3 - start3).count();
    cout << "Insertion Sort Time (ms): " << duration_us3 / 100.0 << endl << endl;

    auto start4 = chrono::high_resolution_clock::now();
    vector<int> counted = countsort(Merged);
    
    auto end4 = chrono::high_resolution_clock::now();
    cout << "Counting Sort:" << endl;
    for (int val : counted)
        cout << val << " ";
    cout << endl;
    auto duration_us4 = chrono::duration_cast<chrono::nanoseconds>(end4 - start4).count();
    cout << "Counting Sort Time (ms): " << duration_us4 / 100.0 << endl << endl;

    return 0;   }