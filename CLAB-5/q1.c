// to search an element in an array
#include <stdio.h>
int main()
{
    int n, i, x,count;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int a[n];

    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the value of x:");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("%d is present in the array", x);
            break;
        }
        else{
            count++;
        }
        
    }
    if(count == n)
    {
        printf("%d is not present",x);
    }
        

    return 0;
}
