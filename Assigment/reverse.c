#include <stdio.h>

long long int reverse(long long int n)
{
    if (n % 10 == 0)
    {
        n = n / 10;
    }
    while (n / 10 != 0)
    {
        int y = 0;
        y = n % 10;
        printf("%d", y);
        n = n / 10;
    }
    printf("%d", n);
}
long long int main()
{
    long long int a = 0;
    printf("input: ");
    scanf("%lld", &a);
    if (a < 0)
        printf("the number must be positive");
    else
    {
        printf("Output: ");
        reverse(a);
    }    
}