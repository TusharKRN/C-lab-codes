//reverse of a no.
#include<stdio.h>
int main()
{
    int n,rem,sum;
    printf("enter a no.\n");
    scanf ("%d",&n);

    rem=0;
    sum=0;

    while (n != 0)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }
    printf("the reverse of a no. is %d\n",sum);
    
    return 0;
}