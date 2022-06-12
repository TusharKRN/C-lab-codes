//transpose of the matrix

#include <stdio.h>
int main()
{
    int row, col;

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
            matAT[i][j]=matA[j][i];
            printf("%d ",matAT[i][j]);
        }
    printf("\n");

    }
    

    return 0;
}
