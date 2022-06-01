//find factorial of n
#include<stdio.h>
int main()
{
    int i,fact,n;
    printf("enter a no.:");
    scanf("%d",&n);

    i=1;
    fact=1;

    while (i<=n)
    {
        fact=fact*i;
        i=i+1;
    }
    printf("%d",fact);
    
    return 0;
}
