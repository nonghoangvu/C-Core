#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c, delta;
    printf("Number a: "), scanf("%f", &a);
    printf("Number b: "), scanf("%f", &b);
    printf("Number c: "), scanf("%f", &c);
    if(a==0)
    {
        if(b==0){if(c==0){printf("Infinite equation.");} else{printf("Countless solutions.");}}
        else{printf("Equation with 1 solution x = %g", -c/b);}  
    }
    else
    {
        delta = (b*b)-4*a*c;
        if (delta<0){printf("Countless solutions.");}
        else if (delta==0){printf("Equation with dual solution x = %g", -b/(2*a));}
        else{printf("The equation has 2 separate solutions\nX1 = %g\nX2 = %g", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));}
    }
}