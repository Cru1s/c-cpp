#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *created(int length)
{
    srand(time(0));
    int *cre = (int *)malloc(length* sizeof(int));
    for (int i = 0; i < length; i++)
    {
        cre[i]=rand()%9;
        printf("%d ", cre[i]);
    }
    puts("");
    return cre;
}

float average(int *arr, int length)
{
    int y = 0;
    float z;
    for (int i = 0; i < length; i++)
    {
        y = y + arr[i];
    }
    z = (float)y / (float)length;
    printf("average: %.2f\n", z);
}

int min(int *arr, int length)
{
    int min = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    printf("min: %d\n", min);
}

int max(int *arr, int length)
{
    int max = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    printf("max; %d\n", max);
}

int check(int *arr, int n, int length)
{
    int i = 0;
    while (n != arr[i] && i < length)
    {
        i++;
    }
    if (i == length)
        printf("false\n");
    else
        printf("true\n");
}


int main()
{
    int length;
    printf("Length: ");
    scanf("%d", &length);
    int *arri = created(length);
    average(arri, length);
    max(arri, length);
    min(arri, length);
    check(arri,8, length);   
    free(arri);
}