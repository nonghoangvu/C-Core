#include<stdio.h>//LE DO Y NHI_PH34335
#include<stdlib.h>
#include<unistd.h>
int Bai1()
{
    int min, max;
    int i = min;
    float Tong = 0, dem = 0;

    printf("Min: "), scanf("%d", &min);
    printf("Max: "), scanf("%d", &max);
    while(i<=max)
    {
        if(i%2==0)
        {
            Tong+=i;
            dem ++;
        }
        i++;
    }
    printf("Trun binh: %g", Tong/dem);
}
int Bai2()//Tim so nguyen to
{
    int x, i, dem = 0;
    printf("Nhap so X: "), scanf("%d", &x);
    for(i=2; i<x; i++)
    {
        if(x%i==0)
        {dem++;}
        else if (dem==0)
        {
            printf("%d la so nguyen to", x);
            break;
        }
        else
        {
            printf("%d khong phai la so nguyen to", x);
            break;
        }
        
    }
    return 0;
}
int Bai3()//Find square number
{
    int x, i, dem =0;
    printf("Number X: "), scanf("%d", &x);
    for(i=1; i<x; i++)
    {
        if(i*i==x)
        {
            printf("%d la so chinh phuong", x);
            break;
        }
    }
    return 0;
}
int main()
{
    int menu;
    do
    {
        system("cls"), system("color c");
        printf("_______________MENU_______________\n");
        printf("Chuc nang 1: Tinh trung binh tong\n");
        printf("Chuc nang 2: Tim so nguyen to\n");
        printf("Chuc nang 3: Tim so chinh phuong\n");
        printf("Chuc nang 4: Thoat\n");
        printf("Chon che do (1, 2, 3, 4): "), scanf("%d", &menu);
        if(!(menu<=4))
        {
            printf("Vui long thu lai...\n");
            usleep(10000*100);
        }
        else
        {
            continue;
        }
    } while (!(menu<=4));
    switch (menu)
    {
    case 1:
        system("cls");
        printf("Chuc nang 1:Tinh trung binh tong\n");
        Bai1();
        break;
    case 2:
        system("cls");
        printf("Chuc nang 2: TIm so nguyen to\n");
        Bai2();
        break;
    case 3:
        system("cls");
        printf("Chuc nang 3: Tim so chinh phuong\n");
        Bai3();
        break;
    default:
        printf("Thoat chuong trinh!");
        break;
    }
    return 0;
}   