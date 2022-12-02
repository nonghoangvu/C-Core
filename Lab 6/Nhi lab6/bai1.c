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
    float Tong = 0;
    float Trungbinh;
    int dem = 0;
    for ( i = 0; i < n; i++)
    {
        if (mang[i]%3==0)
        {
            Tong = Tong + mang[i];
            dem = dem + 1;

        }
        Trungbinh = Tong/dem;
    }
    printf("Gia tri trung binh: %g ", Trungbinh);
    

}
