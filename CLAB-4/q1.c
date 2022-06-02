#include<stdio.h>
int main()
{
    int i,a[10];
    
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 1; i < 11; i++)
    {
             printf("%d\n",a[-i]);
    }
    
       return 0;
}