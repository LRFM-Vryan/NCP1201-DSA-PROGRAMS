#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<pair<int, string>> cpuScheduler;

    cpuScheduler.push({1, "Background Sync"});
    cpuScheduler.push({10, "System Update"});
    cpuScheduler.push({5, "User Application"});

    while (!cpuScheduler.empty()) {
        cout << "Executing: " << cpuScheduler.top().second << endl;
        cpuScheduler.pop();
    }

    return 0;
}

//The program demonstrated a CPU Scheduler using a max-heap priority queue where tasks with higher
//priority values are executed first. The task "System Update" with priority 10 is executed
//before "User Application" with priority 5 and "Background Sync" with priority 1.
//The program used priority_queue<pair<int, string>> to store tasks along with their priority levels,
//and the .top() method retrieves the task with the highest priority for execution.
//The program showcased the max-heap behavior of the priority queue by ensuring that tasks
//are executed in order of their priority, demonstrating how a CPU scheduler might prioritize
//different processes based on their importance.

//The priority_queue was used to schedule the highest integer input or the highest priority to be done during
//a cpu scheduler making the system update the priority and then the user application and lastly the
//background sync