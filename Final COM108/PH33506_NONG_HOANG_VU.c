#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
struct ThonTinGiaDinh
{
    char ten[50];
    int tuoi;
    float canNang;
    float chieuCao;
};
void ChucNang1() // Lesson 1
{
    struct ThonTinGiaDinh INFORMATION;
    printf("\tThong tin gia dinh\n");
    // Get information
    printf("Ho Ten: "), fflush(stdin), gets(INFORMATION.ten);
    printf("Tuoi: "), scanf("%d", &INFORMATION.tuoi);
    printf("Can Nang: "), scanf("%f", &INFORMATION.canNang);
    printf("Chieu Cao: "), scanf("%f", &INFORMATION.chieuCao);
    // Show information
    printf("\n\tThong tin vua nhap\n");
    printf("Ho ten: %s", INFORMATION.ten);
    printf("\nTuoi: %d", INFORMATION.tuoi);
    printf("\nCan Nang: %.2f", INFORMATION.canNang);
    printf("\nChieu Cao: %.2f", INFORMATION.chieuCao);
}
int ChucNang2(int n) // Lesson 2
{
    int soNguyen[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("So nguyen thu %d: ", i + 1), scanf("%d", &soNguyen[i]);

        } while (soNguyen[i] < 0);
    }
    printf("\nSo le trong khoang tu 1 -> %d la: ", n);
    for (int i = 0; i < n; i++)
    {
        // In ra cac so le tu 1 -> N
        if (soNguyen[i] % 2 != 0)
        {
            printf("%d ", soNguyen[i]);
        }
        // Dem cac so chan tu 0 -> N
        if (soNguyen[i] % 2 == 0)
        {
            count++;
        }
    }
    printf("\nCo %d so chan trong khoang tu 0 -> %d", count, n);
}
int ChucNang3(int soLuong)
{
    float diem[soLuong];
    float SUM;
    float max = 0;
    int address = 0;
    for (int i = 0; i < soLuong; i++)
    {
        do
        {
            printf("Nhap diem sinh vien %d: ", i + 1), scanf("%f", &diem[i]);
        } while (diem[i] < 0 || diem[i] > 10);
        SUM += diem[i];
    }
    printf("\n\tThong Tin Sinh Vien\n");
    printf("\t* So luong diem Sinh Vien: %d", soLuong);
    printf("\n\t* Diem trung binh cua sinh vien: %.2f", SUM / soLuong);
    for (int i = 0; i < soLuong; i++)
    {
        if (diem[i] > max)
        {
            max = diem[i];
            address = i + 1;
        }
    }
    printf("\n\t* Sinh vien %d la sinh vien co so diem cao nhat la %.1f diem.", address, max);
}
void menu()
{
    printf("\033[0;33m+----------Menu----------+\n");
    printf("1. Thong tin gia dinh.\n");
    printf("2. Tinh toan.\n");
    printf("3. Thong tin sinh vien thi Lap Trinh.\n");
    printf("0. Thoat.\n");
    printf("+------------------------+\n");
    printf("Moi chon: ");
}
void main()
{
    int chon, n;
    int count = 0;
    char choice[2];
    do
    {
    MENU:
        system("cls");
        menu();
        scanf("%d", &chon);
        if (chon > 3)
        {
            printf("Vui long nhap lai...\r");
            sleep(1);
        }
    } while (chon > 3);
    switch (chon)
    {
    case 1:
    C1:
        system("cls");
        ChucNang1();
        printf("\nBan co muon tro ve Menu khong? [Y/N]: "), fflush(stdin), gets(choice);
        if (strcmp(choice, "N") == 0 || strcmp(choice, "n") == 0)
        {
            goto C1;
        }
        else
        {
            goto MENU;
        }
        break;
    case 2:
    C2:
        system("cls");
        printf("\tTinh Toan\n");
        printf("Nhap so phan tu: "), scanf("%d", &n);
        ChucNang2(n);
        printf("\nBan co muon tro ve Menu khong? [Y/N]: "), fflush(stdin), gets(choice);
        if (strcmp(choice, "N") == 0 || strcmp(choice, "n") == 0)
        {
            goto C2;
        }
        else
        {
            goto MENU;
        }
        break;
    case 3:
    C3:
        system("cls");
        printf("\tThong Tin Sinh Vien Thi Lap Trinh\n");
        printf("Nhap so luong: "), scanf("%d", &n);
        ChucNang3(n);
        printf("\nBan co muon tro ve Menu khong? [Y/N]: "), fflush(stdin), gets(choice);
        if (strcmp(choice, "N") == 0 || strcmp(choice, "n") == 0)
        {
            goto C3;
        }
        else
        {
            goto MENU;
        }
        break;

    default:
        for (unsigned int i = 3; i <= 3; i--)
        {
            printf("Thoat chuong trinh sau %i giay.\r", i);
            sleep(1);
        }
        system("cls");
        break;
    }
}