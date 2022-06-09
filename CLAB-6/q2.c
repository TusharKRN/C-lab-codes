// to create an 2D array ,enter the elements & dispaly it
#include <stdio.h>
int main()
{
    int row, col;

    printf("enter the no. of rows");
    scanf("%d", &row);
    printf("enter the no. of column");
    scanf("%d", &col);
    int mat[row][col];

    printf("enter the elements \n");
    

    int i, j;
    
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d ", &mat[i][j]);
        }
        
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j<col; j++)
        {
           printf("%d ", mat[i][j]);
        }
    printf("\n");
        
    }
    printf("\n");
    return 0;
}
