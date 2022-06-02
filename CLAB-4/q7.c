#include <stdio.h>
int main()
{
    int i, j, n, temp;
    printf("enter the no. of elements: ");
    scanf("%d", &n);
    int a[n];

    printf("enter the elements:");

    for (j = 0; j < n; j++)
    {
        scanf("%d", &a[j]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 1; j < n - 1; j++)
        {
            if (a[j - 1] > a[j])
            {

                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }
        printf("the negative no. are in one side : \n");
        for ( j = 0; j < n; j++)
        {
            printf("%d\n",a[j]);
        }
        
        return 0;
    }
