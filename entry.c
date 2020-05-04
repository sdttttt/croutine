#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define MAX_THREAD_COUNT 2

void init();

/**
 * Configuration is The runtime parameters of program.
 * 
 * @author sdttttt
 **/
struct Configuration
{
    int maxThreadCount;
} config;

/**
 * RoutineGroup is a Coroutines Group.
 * 
 * @author sdttttt
 **/
struct RoutineGroup
{
    HANDLE hThread;
};

/**
 * Context of The program.
 * 
 * @author
 **/
struct Context
{
    struct RoutineGroup *group[4096];
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
    init();

    return 0;
}

/**
 * Initializer env.
 * 
 * @author sdttttt
 **/
void init()
{
    config.maxThreadCount = MAX_THREAD_COUNT;
}