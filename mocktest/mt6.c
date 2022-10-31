#include <stdio.h>
void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void main() 
{
    int n1=1, n2=2;
    swap(&n1,&n2);
    printf("%d %d",n1,n2);
    return;
}