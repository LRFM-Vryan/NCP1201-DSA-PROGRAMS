#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> deadlines;

    deadlines.push(5);   // days
    deadlines.push(2);
    deadlines.push(10);

    cout << "Most Urgent Deadline (days): " << deadlines.top() << endl;

    return 0;
}

//The program showcased the min-heap as it outputted the deadline 2 instead of the 5 deadline that was first
//pushed into the priority queue making it a min-heap where the smallest integer value is
//given the highest priority and is on top of the heap.
//The program used the greater<int> to make the priority_queue a min-heap instead of the default max-heap
//which uses less<int>.


//It showed the min-heap because of the vector<int>, greater<int> making the priority_queue<int>
//prioritize the lowest value of the inputs which is the 2