#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> printQueue;

    printQueue.push("Document_A.pdf");
    printQueue.push("Report_B.docx");
    printQueue.push("Image_C.png");

    cout << "Printing: " << printQueue.front() << endl;
    printQueue.pop();
    cout << "Next in line: " << printQueue.front() << endl;

    return 0;
}

//The program demonstrates the FIFO principle in storing queues in which the printQueue is the name of the
//queue that we used to store and manage the string of the program and making the “print
//.pop” to make the string push take out the front and the next element in line.

//The program used the FIFO principle in which the printQueue is the name of the queue<string> where we
//stored our elements and the .front made it so that what came in first will go out first as well.