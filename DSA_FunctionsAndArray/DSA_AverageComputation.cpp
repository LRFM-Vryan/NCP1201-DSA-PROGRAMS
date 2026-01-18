#include <iostream>
using namespace std;
float average(int arr[], int size) {
int sum = 0;
for (int i = 0; i < size; i++) {
sum += arr[i];
}
return sum / (float)size;
}
int main() {
int scores[5] = {80, 85, 90, 75, 95};
cout << "Average: " << average(scores, 5);
return 0;
}

// this program defines a function 'average' that takes an array and its size as parameters,
// and returns the average of the elements in the array. The 'main' function initializes an
// array of integers representing scores, calls 'average', and prints the average to the console.
// the use of the namespace std allows for direct access to standard library features without prefixing them with 'std::'.