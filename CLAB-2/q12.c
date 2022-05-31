//if even print divisible by 4 and if odd print divisible by 3
#include<stdio.h>
int main()
{
    int a;
    printf("enter a no. a ");
    scanf("%d",&a);

    if(a%2==0)
    {
        if(a%4==0)
    {
        printf("%d is even and divisible by 4",a);
    }
    else{
        printf("%d is even but not divisible by 4",a);
    }
    }
    else{
        if(a%2==1)
        {
            if(a%3==0)
        {
            printf("%d is odd and divisible by 3",a);
        }
        else{
            printf("%d is odd but not divisible by 3",a);
        }

    }
    }
    return 0;
}
