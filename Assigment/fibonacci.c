#include <stdio.h>

int fibonacci(int length)
{
    int fib[10000];
    for(int i=0; i<length; i++)
    {
        if (i==0)
        {
            printf("%d ", 0);
        }
        else if (i==1)
        {
            printf("%d ", 1);
        }
        else
        {
            fib[0]=0 , fib[1]=1;
            fib[i]=fib[i-1]+fib[i-2];
            printf("%d ", fib[i]);
        }
    }
}

int main()
{
    fibonacci(9);
}