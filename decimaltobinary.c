// convert decimal to binary
#include <stdio.h>
int main()
{
    int n, i, j, rem, a[100];
    printf("enter the no.");
    scanf("%d",&n);

    i = 0;
    while (n)
    {
        rem = n % 2;
        n = n / 2;
        a[i] = rem;
        i++;
    }
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }

    return 0;
}
