#include <stdio.h>
int main()
{
    float a,b;
    printf("Number a: "), scanf("%f", &a);
    printf("Number b: "), scanf("%f", &b);
    if(a==0)
    {if (b==0){printf("Infinite equation.");}else{printf("Countless solutions.");}}
    else{printf("Equation with 1 solution x: %g", -b/a);}
    return 0;
}