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
 * 0. 初始化环境, 限制线程数量之类的.
 * 1. 每个线程分配一个协程组.
 * 2. 加入一个任务, 自动分配协程组.
 * 3. 线程轮询执行协程组里所有的协程.
 * */
int main(void)
{
    return 0;
}