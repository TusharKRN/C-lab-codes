// // to search an element in an array
// #include <stdio.h>
// int main()
// {
//     int n, i, x, count;
//     printf("Enter number of elements : ");
//     scanf("%d", &n);
//     int a[n];

//     printf("Enter elements in array : ");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("enter the value of x:");
//     scanf("%d", &x);

//     i = 0;
//     while (i < n && x != a[i])
//     {
//         i++;
//     }

//     if (i < n)
//     {
//         printf("The element is found in %dth  position", i + 1);
//     }
//     else
//     {
//         printf("Element not found!");
//     }

//     return 0;
// }


// to search an element in an array
#include <stdio.h>
int main()
{
    int n, i,d,x,count;
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
            d=i+1;
            break;
        }
        else{
            count++;
        }
        
    }
    if(count == n)
    {
        printf("%d is not present",x);
    }else{
        printf("%d is present in %dth position",x,d);
    }
        

    return 0;
}