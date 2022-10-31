#include <stdio.h>

int length = 6;

int add(int array1[], int array2[], int result[])
{
    for (int i = 0; i < length; i++)
    {
        result[i] = array1[i] + array2[i];
        printf("%d ", result[i]);
    }
    puts("\n");
}

int sub(int array1[], int array2[], int result[])
{
    for (int i = 0; i < length; i++)
    {
        result[i] = array1[i] - array2[i];
        printf("%d ", result[i]);
    }
    puts("\n");
}

float divi(int array1[], int array2[], int result[])
{
    float fresult[length];
    for (int i = 0; i < length; i++)
    {
        fresult[i] = (float)result[i];
        fresult[i] = (float)array1[i] / (float)array2[i];
        printf("%.1f ", fresult[i]);
    }
    puts("\n");
}

int multi(int array1[], int array2[], int result[])
{
    for (int i = 0; i < length; i++)
    {
        result[i] = array1[i] * array2[i];
        printf("%d ", result[i]);
    }
    puts("\n");
}

int main()
{
    int array1[] = {1, 2, 3, 4, 5, 6};
    int array2[] = {-2, -3, 1, -3, -4, -5};
    int result[length];
    printf("Add result: ");
    add(array1, array2, result);
    printf("Sub result: ");
    sub(array1, array2, result);
    printf("Divi result: ");
    divi(array1, array2, result);
    printf("Multi result: ");
    multi(array1, array2, result);
}