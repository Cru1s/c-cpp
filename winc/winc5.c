#include <stdio.h>

void vstack(int arr1[], int arr2[], int size1)
{
    int arrtotal[2][size1];

    for (int i = 0; i < size1; i++)
    {
        arrtotal[0][i] = arr1[i];
        arrtotal[1][i] = arr2[i];
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            printf("%d ", arrtotal[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int size1 = 3;
    vstack(a, b, size1);
}