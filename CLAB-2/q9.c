//check whether the given alphabet is vowel or constant
#include<stdio.h>
#include<conio.h>
int main()
{
    /*check if no. is element of {a,e,i,o,u,A,E,I,O,U}*/

    char a;
    printf(" enter the alphabet ");
    scanf("%c",&a);

    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' ||a=='I' || a=='O' || a=='U'){
        printf("given alphabet is vowel ");

    }
    else
        printf("given alphabet is consonant");


    return 0;
}
