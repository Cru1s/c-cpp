#include <stdio.h>

int pascal(int level)
{
    int even[1000], odd[1000];
    for(int i=1; i<=level; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(j==1 || j==i)
            {
                printf("%d ", 1);
                if(i%2==0)
                {
                    odd[j]=1; 
                }
                else
                {
                    even[j]=1;
                }
            }
            else if (i%2!=0)
            {
                even[j]= odd[j-1]+odd[j];
                printf("%d ", even[j]);
            }
            else
            {
                odd[j]= even[j-1]+even[j];
                printf("%d ", odd[j]);
            }

        }
        puts("");
    }
}

int main()
{
    int n;
    printf("Level: ");
    scanf("%d", &n);
    pascal(n);
}