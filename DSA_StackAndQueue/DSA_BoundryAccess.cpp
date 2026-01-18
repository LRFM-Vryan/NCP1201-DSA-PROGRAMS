#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    stack<char> letterStack;
    queue<string> nameQueue;

    letterStack.push('A');
    letterStack.push('B');
    letterStack.push('C');

    nameQueue.push("Alice");
    nameQueue.push("Bob");
    nameQueue.push("Charlie");

    cout << "Stack Top Letter: " << letterStack.top() << endl;
    cout << "Queue Front Name: " << nameQueue.front() << endl;
    cout << "Queue Back Name: " << nameQueue.back() << endl;

    return 0;
}

//The program demonstrates the use of both stack and queue data structures. The stack named letterStack
//stores characters and follows the LIFO principle, while the queue named nameQueue stores strings and
//follows the FIFO principle. The program pushes elements onto the stack and queue, then retrieves
//and displays the top element of the stack and both the front and back elements of the queue
//to illustrate their respective behaviors.
//The stack is used to store characters where the last character pushed in is the first one to be taken
//out following the LIFO principle while the queue is used to store strings where the first string
//pushed in is the first one to be taken out following the FIFO principle.
//The program used .top() to get the top element of the stack which is the last element that was pushed
//in while the .front() and .back() methods were used to get the first and
//last elements of the queue respectively.

//The program has enforced entry and onlook points in which it only lets us see the top of the of the stack
//and only showcasing the front and back of the queue but not the middle.