#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the no. of elements: ");
    scanf("%d",&n);
    int a[n];

    printf("enter the elements: \n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (a[i]==a[j])
            {
                printf("the duplicate no. is %d\n",a[i]);
            }
            
        }
        
    }
    
    
    return 0;
}
