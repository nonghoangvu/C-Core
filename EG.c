#include <stdio.h>
#include <string.h>
#include <unistd.h>
struct ThongTin
{
    int amount;

} IF_VACCINE;

void ThongTinNYC()
{
    char name[50];
    int Year_Birth;
    float Weight;
    system("cls");
    printf("\tThong tin nguoi yeu cu\n");
    printf("Ho Ten: "), fflush(stdin), gets(name);
    printf("Nam sinh: "), scanf("%d", &Year_Birth);
    printf("Can nang: "), scanf("%f", &Weight);
    /// Show information
    printf("\n\nHo ten NYC: %s", name);
    printf("\nNam sinh: %d\nTuoi: %d\n", Year_Birth, 2022 - Year_Birth);
    printf("Can nang: %.1f kg\n", Weight);
}
void TinhTong()
{
    int n, max = 0, sum = 0;
    printf("Nhap so phan tu: "), scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("Nhap so thu %d: ", i + 1), scanf("%d", &array[i]);
            if (array[i] % 2 != 0)
            {
                sum += array[i];
            }
            if (array[i] % 2 == 0)
            {
                if (array[i] > max)
                {
                    max = array[i];
                }
            }

        } while (array[i] < 0);
    }
    printf("Tong cac so le: %d\n", sum);
    printf("So chan lon nhat la: %d\n", max);
}
void ThongTinVaccine()
{
    printf("Nhap so luong vaccine: "), scanf("%d", &IF_VACCINE.amount);
    printf("\nAmount vaccine: %d\n", IF_VACCINE.amount);
}
void MENU()
{
    system("cls");
    printf("\t\tMENU\n");
    printf("1. Thong tin nguoi yeu cu.\n2. Tinh tong cac so le tu 1 den n.");
    printf("\n3. Thong tin vaccine.\n4. Thoat.\n");
    printf("Moi chon: ");
}
int main()
{
    unsigned int choice;
    char SET[2];
Home:
    MENU();
    scanf("%d", &choice);
    if (choice == 0 || choice > 4)
    {
        printf("Chi chon tu (1 -> 4)\n");
        system("pause");
        goto Home;
    }
    switch (choice)
    {
    case 1:
    LESSON1:
        ThongTinNYC();
        printf("Ban co muon tiep tuc khong? [Y/N]: "), fflush(stdin), gets(SET);
        if (strcmp(SET, "Y") == 0 || strcmp(SET, "y") == 0)
        {
            goto LESSON1;
        }
        else
        {
            goto Home;
        }
        break;
    case 2:
    LESSON2:
        system("cls");
        TinhTong();
        printf("Ban co muon tiep tuc khong? [Y/N]: "), fflush(stdin), gets(SET);
        if (strcmp(SET, "Y") == 0 || strcmp(SET, "y") == 0)
        {
            goto LESSON2;
        }
        else
        {
            goto Home;
        }
        break;
    case 3:
    LESSON3:
        system("cls");
        ThongTinVaccine();
        printf("Ban co muon tiep tuc khong? [Y/N]: "), fflush(stdin), gets(SET);
        if (strcmp(SET, "Y") == 0 || strcmp(SET, "y") == 0)
        {
            goto LESSON3;
        }
        else
        {
            goto Home;
        }
        break;

    default:
        printf("Thoat");
        exit(0);
        break;
    }
}