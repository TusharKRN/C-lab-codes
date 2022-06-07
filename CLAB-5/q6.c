//to concateanate two string

#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char a[100],b[100],c[200];
    printf("Enter first string");
    gets(a);
    printf("Enter second string");
    gets(b);

    for(i=0;a[i]!='\0';i++){
        c[i]=a[i];
    }
    c[i]=' ';
    i++;
    int j;
    for(j=0;b[j]!='\0';j++){
        c[i]=b[j];
        i++;
    }
    c[i]='\0';
    printf("The concatenated string is %s",c);
    return 0;
}
