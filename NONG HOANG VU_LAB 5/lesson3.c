#include<stdio.h>//NONG HOANG VU
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a,b;
    printf("Number a: "), scanf("%d", &a);
    printf("Number b: "), scanf("%d", &b);
    printf("Before swap: a = %d and b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d and b = %d", a, b);
    return 0;
}