// symmetric or not
// transpose of the matrix
//  sum of two matrices
#include <stdio.h>
int main()
{
    int row, col, sum = 0;

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

   

        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if(i==j){
                sum = sum + matA[i][j];
            }
        }
        }
    
        printf("%d", sum);

        return 0;
    }
