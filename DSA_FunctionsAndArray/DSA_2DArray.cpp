#include <iostream>
using namespace std;
int main() {
int matrix[2][3] = {
{1, 2, 3},
{4, 5, 6}
};
cout << matrix[0][0] << " ";
cout << matrix[0][1] << " ";
cout << matrix[0][2] << endl;
cout << matrix[1][0] << " ";
cout << matrix[1][1] << " ";
cout << matrix[1][2];
return 0;
}

// this program initializes a 2D array (matrix) with 2 rows and 3 columns,
// assigns values to each element, and then prints the elements in a matrix format
// thus demonstrating the use of two-dimensional arrays in C++.