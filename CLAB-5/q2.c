// to find all the even no and odd no.

#include <stdio.h>
int main()
{
    int n, i, x;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int a[n];

    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

            
           
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("even no. in array: %d\n",a[i]);
        }
    }  
                
    for (i = 0; i < n; i++)
        {
            if (a[i]%2!=0)
            {
                printf("the odd no. are: %d\n",a[i]);
            }
            
        }
    
    return 0;
}
