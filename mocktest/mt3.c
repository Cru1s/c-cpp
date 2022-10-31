#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 5

int main()
{
    int sum=0;
    int array[n];
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        array[i] = rand() % 10;
        sum += array[i];
        printf("%d ", array[i]);
    }
    printf("\nsum: %d", sum);
    return 0;
}
