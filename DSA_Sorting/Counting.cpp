#include <iostream>
#include <vector>
using namespace std;

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
    vector<int> arr = {2,5,3,0,2,3,0,3};
    vector<int> sorted = countsort(arr);

    for (int x : sorted)
        cout << x << " ";

    return 0;
}

// This program implements the Counting Sort algorithm to sort an array of non-negative integers.
// The algorithm counts the occurrences of each unique element and uses this information
// to place elements in their correct positions in the sorted output array.
// The time complexity of Counting Sort is O(n + k), where n is the number of
// elements in the input array and k is the range of the input values (maximum value).