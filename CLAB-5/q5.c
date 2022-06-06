//to reverse a string

#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0, i = 0;
    char a[30], reva[30];
    gets(a);

    while (a[i] != '\0')
    {
        count++;
        i++;
    }
    for ( i = 0; count > 0 ; i++)
    {
        reva[i]=a[count-1];
        count--;
    }
    
    printf("the reverse of %s is %s",a,reva);

    return 0;
}
