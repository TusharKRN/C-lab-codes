#include <stdio.h>
int main()
{
    int n, temp;

    printf("enter size of the array: ");
    scanf("%d", &n);
    int a[n];

    printf("enter elements of array\n");

    for (int j = 0; j < n; j++)
    {
        scanf("%d",&a[j]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (a[j-1] > a[j])
            {
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("the no. in ascending order is :\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d \n", a[j]);
    }

    return 0;
}