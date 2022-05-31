//max no. among 3 no.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 no.:\n");
    scanf("%d%%d",&a,&b,&c);

    

    if(a>b && a>c){
        printf("%d  is largest",a);
    }
   
    else if (b>c && b>a)
    {
        printf("%d  is largest",b);
    }
     else
        printf("%d  is largest",c);


    return 0;
}
