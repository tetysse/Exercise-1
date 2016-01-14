#include<pthread.h>
#include<stdio.h>

static int i = 0

void main()
{
    pthread_t thread_1;
    pthread_t thread_2;
    pthread_create(&thread_1, NULL, thread_1_func, NULL);
    pthread_create(&thread_2, NULL, thread_2_func, NULL);
    pthread_join(thread_1, NULL);
    pthread_join(thread_2, NULL);

    printf(i);
}

void thread_1_func()
{
    for (int j = 0; j < 1000000; j++)
    {
        i++
    }
    return NULL;
}

void thread_2_func()
{
    for (int j = 0; j <= 1000000; j++)
    {
        i--;
    }
    return NULL;
}