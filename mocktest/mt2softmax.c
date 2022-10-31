#include <stdio.h>
#include <math.h>

void print(int n,double array[])
{
    for(int i=0; i<n; i++)
    {
        printf("%.2lf\t", array[i]);
    }
}

void softmax(int n, double array[])
{
    double result[n];
    double denominator = 0;
    int i;
    for(i=0; i<n ; i++)
    {
        denominator += exp(array[i]);  
    }
    
    for(i=0; i<n ; i++)
    {
        result[i] = exp(array[i])/denominator;
    }
    print(n,result);
}

int main()
{
    double array[] = {1.0, 2.0, 3.0};
    printf("Array:");
    print(3,array);
    puts("");
    printf("Softmax:");
    softmax(3,array);
    return 0;
}


