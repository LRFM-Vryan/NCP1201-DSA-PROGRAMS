#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> actions;

    actions.push("Open File");
    actions.push("Edit File");
    actions.push("Save File");

    cout << "Last action: " << actions.top() << endl;
    actions.pop();
    cout << "After undo, current action: " << actions.top() << endl;

    return 0;
}

//This program demonstrates a simple undo functionality using a stack.
//The last action "Save File" is undone, and the current action becomes "Edit File".

//The program demonstrates the LIFO principle in storing stacks in which the actions is the name of the
//stack that we used to store and manage the string of the program and making the “actions.pop” to make
//the string push take out the top and the next element in line.