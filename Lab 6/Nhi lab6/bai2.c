#include<stdio.h>
int main()
{
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int mang[n];
    int i;
    for(i=0; i<n; i++)
    {
        printf("Nhap du lieu: "), scanf("%d", &mang[i]);
    }
    int Max;
    for(i=0; i<n; i++)
    {
        if(mang[i] > Max)
        {
            Max = mang [i];
        }
    }
    printf("Xuat ra man hinh: %d", Max);
}
