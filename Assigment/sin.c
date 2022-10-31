#include <stdio.h>
#include <math.h>

double factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

double sinn(double x, int n)

{
    double y = 0;
    for (int i = 0; i <= n; i++)
    {
        y += pow(-1, i) * (pow(x, 2 * i + 1) / factorial(2 * i + 1));
    }
    return y;
}

int main()
{
    double x;
    int n;
    printf("Input: ");
    scanf("%lf %d", &x, &n);
    if (n < 0)
    {
        printf("n is not a positive integer");
    }
    else
    {
        printf("%.19lf", sinn(x, n));
    }
}