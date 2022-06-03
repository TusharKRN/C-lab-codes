// factorial of no. by reccursive function
#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int num;
    printf("enter the no. you want to take factorial of:");
    scanf("%d", &num);
    printf("the factorial of %d is %d\n", num, factorial(num));
    return 0;
}
