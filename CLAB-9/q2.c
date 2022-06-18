// max element in an array using call by reference

#include <stdio.h>
int max(int *p)
{
    int i, max = *p;

    for (i = 1; i < 10; i++)
    {
        if (*(p + i) > max)
            max = *(p + i);
    }

    return max;
}
int main()
{
    int m, i, a[10];
    printf("Enter the elements:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    m = max(a);
    printf("The greater number among the array is %d ", m);
    return 0;
}