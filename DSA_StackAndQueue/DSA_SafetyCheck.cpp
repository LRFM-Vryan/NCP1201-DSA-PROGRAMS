#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> students;

    cout << "Queue empty? " << students.empty() << endl;

    students.push("Juan");
    students.push("Maria");

    cout << "Students waiting: " << students.size() << endl;

    if (!students.empty()) {
        cout << "Serving: " << students.front() << endl;
        students.pop();
    }

    cout << "Remaining students: " << students.size() << endl;
    return 0;
}

//This program demonstrated safety checks for a queue by using the .empty() method to check if the
//queue is empty before performing operations like .front() and .pop() to avoid errors when
//accessing or removing elements from an empty queue.

//The program checks whether the query was empty and how many are there in line to make sure that the
//pop() is not executing on an empty queue preventing a crash.