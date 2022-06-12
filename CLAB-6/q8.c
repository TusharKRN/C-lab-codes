// multiplication of two square matrices

#include <stdio.h>
int main()
{
    int row, col;

    printf("enter the no. of rows");
    scanf("%d", &row);
    printf("enter the no. of column");
    scanf("%d", &col);
    int matA[row][col], matB[row][col], matC[row][col];

    printf("enter the elements of 1st matrix \n");

    int i, j, k;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }

    printf("enter the elements of 2nd matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matB[i][j]);
        }
    }
    printf("\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)

        {
            int sum = 0;
            for (k = 0; k < col; k++)
            {
                sum = sum + matA[i][k] * matB[k][j];
                matC[i][j] = sum;
            }
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)

        {
            printf("%d ",matC[i][j]);
        }
        printf("\n");
    }
        printf("\n");
    
    return 0;
}
