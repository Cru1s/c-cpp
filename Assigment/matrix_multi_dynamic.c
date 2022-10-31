#include <stdio.h>
#include <stdlib.h>


int *create(int rows, int columns)
{
    int *cre = (int *)malloc(rows * columns * sizeof(int));
    printf("Enter matrix: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &cre[i*columns+j]);
        }
    }
    return cre;
 
}

void multiplication(int mat1[0], int mat2[0], int rows, int columns)
{
    int *result = (int*)malloc(rows*columns*sizeof(int));
    for (int i=0; i<rows; i++)
    {   
        
        for (int j=0; j<columns; j++)
        {   
            int sum=0;
            for (int k=0;k<rows;k++ )
            {   
                sum += mat1[i*rows+k] * mat2[k*columns+j];
            }
            result[i*rows+j]=sum;
            printf("%d ", result[i*rows+j]);
        } 
        puts("");   
    }
}

int main()
{
    int r1, c1, c2;
    printf("enter rows and columns: ");
    scanf("%d %d %d", &r1, &c1, &c2);
    int mat1 = create(r1,c1);
    int mat2 = create(r1,c2);
    multiplication(mat1, mat2, r1, c2);
    free(mat1);
    free(mat2);
}