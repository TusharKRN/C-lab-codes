// factorial of no. by reccursive function
#include <stdio.h>
int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n * fact(n - 1));
    }
}

int main()
{
    int num;
    printf("enter the no. you want to take factorial of:");
    scanf("%d", &num);
    printf("the factorial of %d is %d\n", num, fact(num));
    return 0;
}
