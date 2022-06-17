// find the sum of all the variable using pointer variable
#include <stdio.h>

int fun(int *p)
{
    int i, sum = 0;
    for (i = 0; i < 10; i++)
    {
        sum = sum + *(p + i);
    }

    return sum;
}

int main()
{
    int arr[10], sum, i;

    printf("enter the elements:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum = fun(arr);
    printf("the sum of all the elements is:%d\n", sum);

    return 0;
}