#include<stdio.h>//LE_DO_Y_NHI
float max(float a, float b, float c)
{
    float max = a;//max ban dau = a
    if(b > max)//Neu b > max 
    {
        max = b;//Gan max = b
    }
    if (c > max)//Neu c > max 
    {
        max = c;//Gan max = c
    }
    return max;//ket qua tra ra la max
    
}
int main()
{
    float a,b,c;
    printf("So thu 1: "), scanf("%f", &a);
    printf("So thu 2: "), scanf("%f", &b);
    printf("So thu 3: "), scanf("%f", &c);
    printf("So lon nhat la: %g", max(a,b,c));//max(a,b,c) la truyen ba gia tri duoc khai bao o ham max
    return 0;
}