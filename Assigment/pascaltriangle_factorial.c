#include <stdio.h>

int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

long int pascal(int row)
{
    int num=0;
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(j==1 || j==i)
            {
                printf("%d ", 1);
            }
            else
            {
                num = factorial(i-1)/(factorial(j-1)*factorial(i-1-j+1));
                printf("%d ", num);
            }
        }

        puts("");
    }    
}

int main()
{
    pascal(15);
}