#include <iostream>
using namespace std;
void showArray(int arr[], int size) {
for (int i = 0; i < size; i++) {
cout << arr[i] << " ";
}
}
int main() {
int values[3] = {7, 14, 21};
showArray(values, 3);
return 0;
}

// this program defines a function 'showArray' that takes an array and its size as parameters,
// and prints each element of the array to the console. The 'main' function initializes an
// array of integers, calls 'showArray', and displays the elements.