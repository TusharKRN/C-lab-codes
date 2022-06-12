// symmetric or not
// transpose of the matrix
//  sum of two matrices
#include <stdio.h>
int main()
{
    int row, col, count = 0;

    printf("enter the no. of rows:");
    scanf("%d", &row);
    printf("enter the no. of column:");
    scanf("%d", &col);
    int matA[row][col], matAT[row][col];

    printf("enter the elements of 1st matrix \n");

    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            matAT[i][j] = matA[j][i];
            printf("%d ", matAT[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (matA[i][j] == matAT[i][j])
            {
                count++;
            }

            else
            {
                continue;
            }
        }
    }
    if (count == i * j)
    {
        printf("the matrix is symmetric\n");
    }
    else
    {
        printf("the matrix is not symmetric\n");
    }

    return 0;
}
