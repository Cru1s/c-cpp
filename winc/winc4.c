
#include <stdio.h>
#include <time.h>
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int data[8];
    for (int i = 0; i < 9; i++)
    {
        data[i] = rand() % 10;
    }
    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    float result[10];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (data[i] == j)
            {
                count[j] += 1;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        result[i] = count[i] * 1.0 / 9;
        printf("Number %d:%.1f\n", i, result[i]);
    }
    return 0;
}