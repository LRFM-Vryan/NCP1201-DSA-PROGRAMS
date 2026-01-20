#include <iostream>
#include <queue>
#include <chrono>
using namespace std;

int main() {
    priority_queue<string> pq;

    auto start = chrono::high_resolution_clock::now();

    for (int i = 0; i < 50000; i++) {
        pq.push("Task_" + to_string(i));
    }

    auto end = chrono::high_resolution_clock::now();

    cout << "Insertion time (ms): "
         << chrono::duration_cast<chrono::milliseconds>(end - start).count()
         << endl;

// This program measures the time complexity of inserting 50,000 elements
// into a priority queue. The time taken is displayed in milliseconds.
// the program demonstrates the use of chrono library for high-resolution timing
// and the priority_queue from the STL for managing a collection of strings.
// The expected time complexity for each insertion is O(log n), leading to an overall
// time complexity of O(n log n) for inserting n elements.
// what is the O(n log n) time complexity here?
// Inserting each of the n elements into the priority queue takes O(log n) time,
// resulting in a total time complexity of O(n log n) for n insertions.
// where n is the number of elements being inserted (50,000 in this case).