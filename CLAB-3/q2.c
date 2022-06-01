//even no. till n
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a no.:");
    scanf("%d",&n);

    i=0;
    while (i<=n)
    {
        printf("%d\n",i);
        i=i+2;
    }
    
    return 0;
}
