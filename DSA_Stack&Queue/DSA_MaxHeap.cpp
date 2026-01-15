#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> grades;

    grades.push(85);
    grades.push(92);
    grades.push(78);

    cout << "Highest Grade: " << grades.top() << endl;

    return 0;
}

//The program demonstrated the max-heap as it outputted the highest grade 92 instead of the 85 grade that was first
//pushed into the priority queue making it a max-heap where the largest integer value is
//given the highest priority and is on top of the heap.
//The program used the default less<int> to make the priority_queue a max-heap.
//It showed the max-heap because of the priority_queue<int> making the priority_queue
//prioritize the highest value of the inputs which is the 92

//The program showcased the max-heap as it outputted the grade 92 instead of the 85 grade that was first
//inputted, this happened because priority_queue and the grades.top() was used to output the highest value
//inputted.