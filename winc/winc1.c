#include <stdio.h>


void print(int array[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
}

void reverse(int array[], int n)
{
    int a;
    for (int i=0; i<n;i++)
    {
        a=array[i];
        array[i]=array[n-1];
        array[n-1]=a;
        n--;
    }
}

int main()
{
    int array[] = {6,5,7};
    int n = 3;
    reverse(array,n);
    print(array,n);
    return 0;
}