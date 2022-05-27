#include <stdio.h>
int main(){
    float fahrenheit;
    printf("enter temperature in fahrenheit\n");
    scanf("%f",&fahrenheit);                             
    printf("temperature in centigrade is %f \n",(fahrenheit-32)*5/9);
    return 0;
}
