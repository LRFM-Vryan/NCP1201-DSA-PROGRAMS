#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> courseA, courseB;

    courseA.push("DSA");
    courseA.push("OOP");

    courseB.push("DBMS");
    courseB.push("OS");
    courseA.swap(courseB);

    cout << "Course A Top: " << courseA.top() << endl;
    cout << "Course B Top: " << courseB.top() << endl;

    return 0;
}

//The swap() function is used to exchange the contents of two stacks.
//After swapping, the top of courseA becomes "OS" and the top of courseB becomes "OOP".