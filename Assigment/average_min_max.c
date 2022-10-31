#include <stdio.h>

int length = 5;

float average(int arr[])
{
    int y = 0;
    float z;
    for (int i = 0; i < length; i++)
    {
        y = y + arr[i];
    }
    z = (float)y / (float)length;
    return z;
}

int min(int arr[])
{
    int min = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}

int max(int arr[])
{
    int max = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int check(int arr[], int n)
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
    int arri[] = {1, 4, 5, 6, 2};
    printf("average: %.2f \n", average(arri));
    printf("min: %d \n", min(arri));
    printf("max: %d \n", max(arri));
    check(arri, 2);
    check(arri, 9);
}