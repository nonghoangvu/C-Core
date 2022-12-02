#include<stdio.h>
int Kiem_Tra_Nam_Nhuan(int Nam_Nhuan)
{
    if (Nam_Nhuan % 400 == 0 || Nam_Nhuan % 4==0 && Nam_Nhuan%100!=0)
    {
        printf("%d La nam nhuan.", Nam_Nhuan);
    }
    else
    {
        printf("%d Khong phai nam nhuan.", Nam_Nhuan);
    }
    return 0;
}
int main()
{
    int Nam_Nhuan;
    printf("Nhap Nam: "), scanf("%d", &Nam_Nhuan);
    Kiem_Tra_Nam_Nhuan(Nam_Nhuan);
    return 0;
}