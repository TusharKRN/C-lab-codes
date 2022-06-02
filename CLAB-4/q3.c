// to find the max. and min. element in an array

#include <stdio.h>

int main()
{
    int n, i, min, max;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int a[n];

    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }
    printf("minimum of array is : %d\n", min);
    printf("maximum of array is : %d\n", max);

    return 0;
}