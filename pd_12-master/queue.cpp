#include "Queue.h"

#define QUEUE_SIZE 5
int queue_table[QUEUE_SIZE] = { 0 };
int head = 0;
int tail = 0;
int queue_count = 0;

int isQueueEmpty(void)
{
    return (queue_count == 0) ? 1 : 0;
}

int isQueueFull(void)
{
    return (queue_count == QUEUE_SIZE) ? 1 : 0;
}

int usun(void)
{
    if (!isQueueEmpty())
    {
        int val = queue_table[head];
        head = (head + 1) % QUEUE_SIZE;
        queue_count--;
        return val;
    }

    return queue_table[0];
}

int pierwszy(void)
{
    if (!isQueueEmpty())
    {
        return queue_table[head];
    }

    return queue_table[0];
}

void wstaw(int val)
{
    if (!isQueueFull())
    {
        queue_table[tail] = val;
        tail = (tail + 1) % QUEUE_SIZE;
        queue_count++;
    }
}