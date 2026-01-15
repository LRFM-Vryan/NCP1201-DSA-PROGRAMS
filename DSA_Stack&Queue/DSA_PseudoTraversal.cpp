#include <iostream>
#include <stack>
using namespace std;

void showHistory(stack<string> history) {
    while (!history.empty()) {
        cout << history.top() << endl;
        history.pop();
    }
}

int main() {
    stack<string> commandHistory;

    commandHistory.push("Login");
    commandHistory.push("Upload File");
    commandHistory.push("Logout");

    cout << "Command History (Latest First):\n";
    showHistory(commandHistory);

    return 0;
}

// This program demonstrates pseudo-traversal of a stack by using a helper function
// to display the contents of the stack without modifying the original stack.
// The showHistory function takes a copy of the stack and pops elements to display them,
// effectively simulating traversal.

//The program used a while loop to empty out the stack of commandHistory starting from the top which is
//the “Logout” as it was the last that was put in following the LIFO principle