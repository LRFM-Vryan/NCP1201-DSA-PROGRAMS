#include <iostream>
using namespace std;
int findMax(int arr[], int size) {
int maxVal = arr[0];
for (int i = 1; i < size; i++) {
if (arr[i] > maxVal)
maxVal = arr[i];
}
return maxVal;
}
int main() {
int data[4] = {2, 9, 4, 7};
cout << "Max: " << findMax(data, 4);
return 0;
}

// this program defines a function 'findMax' that takes an array and its size as parameters,
// and returns the maximum value in the array. The 'main' function initializes an array of
// integers, calls 'findMax', and prints the maximum value to the console.