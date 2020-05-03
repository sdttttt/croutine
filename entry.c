#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// DWORD WINAPI fn(LPVOID lpParamter)
// {
// }

// HANDLE hThread = CreateThread(NULL, 0, fn, NULL, 0, NULL);
    // CloseHandle(hThread);
    // for (int i = 0; i < 10; i++)
    //     printf("OKOK");

/**
 * Configuration is The runtime parameters of program.
 * 
 * @author sdttttt
 **/
struct Configuration {
    int maxThreadCount;
} config;

/**
 * RoutineGroup is a Coroutines Group.
 * 
 * @author sdttttt
 **/
struct RoutineGroup {
  HANDLE hThread;
};

/**
 * Context of The program.
 * 
 * @author
 **/
struct Context {
    struct RoutineGroup* group[4096];
} context;

/**
 * 0. Initializer env.
 * 1. Allocate a RoutineGroup for the thread. 
 * 2. Automatically enter RoutineGroup when Add task.
 * 3. Threads will execute each Routine. repeating this.
 * 
 * @author sdttttt
 * */
int main(void)
{
    config.maxThreadCount = 2;
    return 0;
}