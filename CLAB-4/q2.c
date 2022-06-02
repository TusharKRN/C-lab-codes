//create an array and find sum
#include<stdio.h>
int main()
{
    int i,a[10],sum=0;
    
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        sum=sum+a[i];
    }
    printf("the sum is %d",sum);
    
    return 0;
}
