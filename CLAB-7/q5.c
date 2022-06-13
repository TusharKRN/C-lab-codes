// calculator using function
#include <stdio.h>
// declaring functions
int sum(int, int);
int diff(int, int);
int prod(int, int);
float div(float, float);

// defining the functions
int sum(int x, int y)
{
    int add;
    add = x + y;
    return add;
}
int diff(int x, int y)
{
    int sub;
    sub = x - y;
    return sub;
}
int prod(int x, int y)
{
    int mul;
    mul = x * y;
    return mul;
}
float div(float x, float y)
{
    int division;
    division = x / y;
    return division;
}
// calling the function
int main()
{
    int i, s, d, m, x;
    float a, b, di;

    do
    {
        printf("enter the task you want to operate\n1.Add\n2.Difference\n3.Product\n4.Division\n");
        scanf("%d", &i);
        printf("enter two numbers:\n");
        scanf("%f %f", &a, &b);

        switch (i)
        {
        case 1:
            s=sum(a,b);
            printf("Sum=%d",s);
            break;
        case 2:
            d=diff(a,b);
            printf("Difference=%d",d);
            break;
        case 3:
            m=prod(a,b);
            printf("Product=%d",m);
            break;

        case 4:
            if(b!=0)
            {
                di=div(a,b);
                printf("Division=%d",di);

            }
            else{
                printf("cant be divisible");
            }
            break;
        default:
        printf("Invalid Input");
            break;
        }
        printf ("\nDo you want to continue ? PRESS 1 IF YES AND 0 IF NO\n");
        scanf("%d",&x);
    }while(x>0);

    return 0;
}