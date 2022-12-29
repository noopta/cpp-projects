#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    pid_t child_pid = fork();

    if (child_pid < 0)
    {
        cout << "fork failed";
        return 0;
    }
    else if (child_pid == 0)
    {
        cout << "child process running pid = " << getpid() << "\n";
    }
    else
    {
        cout << "parent process running pid = " << getpid() << "\n";
    }

    cout << "hello";
    return 0;
}
