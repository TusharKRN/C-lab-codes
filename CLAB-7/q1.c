// find the product of two no. using function without passing argument
#include <stdio.h>

int prod();
int prod()
{

    int x, y, mul;
    printf("enter two numbers:\n");
    scanf("%d %d", &x, &y);
    mul = x * y;
    return mul;
}

int main()
{
    int a, b, mul;

    mul = prod();
    printf("product=%d", mul);

    return 0;
}