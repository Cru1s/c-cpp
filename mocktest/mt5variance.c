#include <stdio.h>
#include <math.h>

double sum(int array[], double n)
{
    int total=0;   
    double result=0;
    for (int i=0; i<n; i++)
    {
        total += array[i];
    }
    result = (1/n) * total;
    return result;
} 
double variance(int array[], double n)
{
    double total=0,
           result=0,
           mean = 0 ;
    mean = sum(array,n);
    for (int i=0; i<n; i++)
    {
        total += pow(array[i]-mean, 2);
    }
    result = (1/n)*total;
    return result;
}

int main()
{
    int array[]= {5,3,6,7,4};
    double n = 5;
    printf("result = %.2lf", variance(array,n));
    return 0;
}