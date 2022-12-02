#include<stdio.h>//NONG HOANG VU
float max(float a, float b, float c)
{
    float max = a;
    if(b > max){max = b;}
    if (c > max){max = c;}
    return max;
}
int main()
{
    float a[3];
    for(int i = 0; i<=2; i++)
    {
        printf("Number %d: ", i+1), scanf("%f", &a[i]);
    }
    printf("Max is: %g", max(a[0], a[1], a[2]));
    return 0;
}