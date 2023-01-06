#include <stdio.h>
int main()
{
    int chon;
    do
    {
        printf("+----------Menu----------+");
        printf("\n1. Thong tin cá nhân.");
        printf("\n2. Xep loai diem");
        printf("\n3. Thong tin laptop");
        printf("\n4. Thoat");
        printf("\n+------Moi ban chon------+");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            // bai1();
            break;
        case 2:
            // bai2();
            break;
        case 3:
            // bai3();
            break;
        case 4:
            break;
        default:
            printf("Nhap sai, Nhap lai");
            break;
        }
    } while (chon = 0);

    return 0;
}