
#include <stdio.h>
#include <stdlib.h>

void mmm(int a[][2], int b[][2], int length)
{
    int arr[2][2];
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            arr[i][j] = 0;
            for (int n = 0; n < length; n++)
            {
                arr[i][j] += a[i][n] * b[n][j];
            }
        }
    }
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[2][2] = {1, 2, 3, 4};
    int b[2][2] = {2, 3, 2, 1};
    mmm(a, b, 2);
    mmm(b, a, 2);
    return 0;
}
