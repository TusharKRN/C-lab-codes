//to enter a string and find its length
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,i=0;
    char a[30];
    gets (a);

    while (a[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%d\n",count);

    return 0;
}
