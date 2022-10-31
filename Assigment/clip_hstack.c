#include <stdio.h>

int length = 8;

int clip(int arr[], int min, int max)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < min)
            arr[i] = min;
        if (arr[i] > max)
            arr[i] = max;
        printf("%d ", arr[i]);
    }
    puts("");
}

int hstack(int arr1[], int arr2[], int x, int y)
{
    int z = 0;
    int result[x + y];
    for (int i = 0; i < x; i++)
    {
        result[i] = arr1[i];
    }
    for (int j = x; j < x + y; j++)
    {
        result[j] = arr2[z];
        z++;
    }
    for (int i = 0; i < x + y; i++)
    {
        printf("%d ", result[i]);
    }
}

int main()
{
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8},
        array1[] = {4, 0, 8},
        array2[] = {4, 5, 6, 7, 8, 9, 10},
        size1 = sizeof(array1) / sizeof(array1[0]),
        size2 = sizeof(array2) / sizeof(array2[0]);
    printf("clip: ");
    clip(data, 3, 6);
    printf("hstack: ");
    hstack(array1, array2, size1, size2);
}