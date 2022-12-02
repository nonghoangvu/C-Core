#include<stdio.h>
void nhi(int * a, int * b)
{
    int u,z;
    int lan;
    lan = *u;
    *u = *z;
    *z = lan;
}
int main()
{
    int a,b;
    printf("Nhap a: "), scanf("%d", &a);
    printf("Nhap b: "), scanf("%d", &b);
    nhi(&a,&b);
}
