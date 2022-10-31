#include <stdio.h>

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

 int main()
 {
     double n = 5;
     int array[] = {5,3,6,7,4};
     printf("%.2lf", sum(array,n));
     return 0;
 } 