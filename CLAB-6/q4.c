//difference of two matrices
// sum of two matrices
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

    int i, j;

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
            matC[i][j] = matA[i][j] - matB[i][j];
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
