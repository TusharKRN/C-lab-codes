// enter a string and copy it to another string
#include <stdio.h>
#include <string.h>
int main()
{
    int  i = 0;
    char a[30], a2[30];
    gets(a);

    while (a[i] != '\0')
    {
        a2[i] = a[i];
        i++;
    }
    a2[i] = '\0';
    printf("%s\n", a2);

    return 0;
}
