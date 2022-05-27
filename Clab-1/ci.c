#include <stdio.h>
#include <math.h>
int main()
{
    float p, r, t, ci;
    printf("Enter the principle :");
    scanf("%f", &p);
    printf("Enter the rate :");
    scanf("%f", &r);
    printf("Enter the time :");
    scanf("%f", &t);
    
    ci = p * pow((1 + r/100), t);

    printf("The compound interest is %0.2f\n", ci);

    return 0;
}