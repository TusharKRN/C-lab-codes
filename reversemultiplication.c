//reverse multiplication (n*10,n*9,n*8,...n*1)
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a no.:");
    scanf("%d",&n);

    for ( i = 10; i; i--)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    
    return 0;
}
