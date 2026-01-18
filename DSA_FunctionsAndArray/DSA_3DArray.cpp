#include <iostream>
using namespace std;
int main() {
int cube[2][2][2] = {
{ {1, 2}, {3, 4} },
{ {5, 6}, {7, 8} }
};
cout << cube[0][0][0] << endl;
cout << cube[0][1][1] << endl;
cout << cube[1][0][1] << endl;
cout << cube[1][1][0];
return 0;
}

// this program creates a 3D array and accesses its elements to print them out
// the way it works is by defining a 3D array called 'cube' with dimensions 2x2x2
// it then initializes the array with values from 1 to 8
// finally, it accesses specific elements of the array using their indices and prints them to the console