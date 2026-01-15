#include <iostream>
#include <vector>
using namespace std;

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

int main() {
    vector<int> arr = {12, 11, 13, 5, 6};
    int n = arr.size();

    insertionsort(arr, n);

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}

//to understand the sorting algo better watch this video: https://www.youtube.com/watch?v=DFG-XuyPYUQ
//put a breaking point at line 8, 12, 15 to see how the swapping of elements happen in each iteration.