#include<stdio.h>//LE DO Y NHI
#include<stdlib.h>
#include<unistd.h>
int UCLN(int a, int b)//Bai 2 tim uoc chung lon nhat
{
    if(a==0 || b==0)
    {
        return a + b;
    }
    while (a != b)
    {
        if(a>b)
        {
            a = a - b;
            return a;
        }
        else{b = b - a;}
    }
    return a;
}
int UCNN(int a,int b)//Bai 2 tim uoc chung nho nhat
{
    return a * b / UCLN(a,b);
} 
int So_Nguyen(float number)//Bai 1 kiem tra so nguyen
{
    int Kiem_Tra = -1;
    if(number == (int)number)
    {
        Kiem_Tra = 1;//So nguyen
    }else
    {
        Kiem_Tra = -1;//So thuc
    }
    return Kiem_Tra;
}
void So_Nguyen_To(int number)//Bai 1 kiem tra so nguyen to
{
    int Dem = 0;
    for(int i = 2; i < number / 2; i++)
    {
        if(number % i == 0)
        {
            Dem++;
        }
    }
    if(number<2)
    {
        printf("%d Khong phai la so nguyen to\n", number);
    }else
    {
        if(Dem == 0)
        {
            printf("%d La so nguyen to\n", number);
        }else
        {
            printf("%d Khong phai la so nguyen to\n", number);
        }
    }
}
void So_Chinh_Phuong(int number)//Bai 1 kiem tra so chinh phuong
{
    int Kiem_Tra = -1;
    for(int i = 2; i <= number / 2; i++)
    {
        if(i * i == number)
        {
            Kiem_Tra = 1;//la chinh phuong
            break;
        }
    }
    if(Kiem_Tra == 1)
    {
        printf("%d La so chinh phuong\n", number);
    }else
    {
        printf("%d Khong la so chinh phuong\n", number);
    }
}
int Chuc_Nang1()//Chuc nang 1
{
    system("cls");
    printf("Chuc nang 1: Kiem tra so nguyen\n");
    float number;
    printf("Nhap so x: "), scanf("%f", &number);
    int Check_So_Nguyen = So_Nguyen(number);
    if(Check_So_Nguyen > 0)
    {
        printf("%g La so nguyen\n", number);
        So_Nguyen_To(number);
        So_Chinh_Phuong(number);
    }else
    {
        printf("%g Khong phai la so nguyen\n", number);
    }
}
int Chuc_Nang2()//Chuc nang 2
{
    int x,y;
    printf("Chuc nang 2: Tim uoc so chung va boi so chung cua 2 so\n");
    printf("Nhap so x: "), scanf("%d", &x);
    printf("Nhap so y: "), scanf("%d", &y);
    int Uoc_Chung_Lon_Nhat = UCLN(x,y);
    int Boi_Chung_Nho_Nhat = UCNN(x,y);
    printf("Uoc chung lon nhat la: %d", Uoc_Chung_Lon_Nhat);//Uoc chung lon nhat la
    printf("\nBoi chung nho nhat la: %d ", Boi_Chung_Nho_Nhat);//Boi chung nho nhat la
}
void Chuc_Nang3(int Bat_Dau, int Ket_Thuc)//Bai 3 chuong trinh tinh tien quan karaoke
{
    const int So_Tien_Moi_Gio = 150000;
    int Tong_So_Gio, Tien, Khuyen_Mai, Khuyen_Mai_Vang;
    Tong_So_Gio = Ket_Thuc -Bat_Dau;
    if(Bat_Dau>=14&&Bat_Dau<=18)
    {
        printf("Khuyen mai khung gio vang 10%\n");
        if(Tong_So_Gio>3)
        {
            printf("Tien gio vuot qua 3 gio\n");
            Khuyen_Mai = (Tong_So_Gio - 3)*0.3 * So_Tien_Moi_Gio;
            Tien = Tong_So_Gio * So_Tien_Moi_Gio - Khuyen_Mai;
            printf("So gio vuot %d gio => Tien khuyen mai %d\n", Tong_So_Gio-3,Khuyen_Mai);
        }else
        {
            Tien = Tong_So_Gio*So_Tien_Moi_Gio;
        }
        Khuyen_Mai_Vang = Tien*0.1;
        printf("Tien gio truoc khuyen mai: %d\n", Tien);
        printf("Tien khuyen mai vang: %d\n", Khuyen_Mai_Vang);
        Tien = Tien - Khuyen_Mai_Vang;
    }else
    {
        if(Tong_So_Gio>3)
        {
            printf("Tien gio vuot qua 3 gio\n");
            Khuyen_Mai = (Tong_So_Gio - 3)*0.3 * So_Tien_Moi_Gio;
            Tien = Tong_So_Gio * So_Tien_Moi_Gio - Khuyen_Mai;
            printf("So gio vuot %d gio => Tien khuyen mai %d\n", Tong_So_Gio-3,Khuyen_Mai);
        }else
        {
            Tien = Tong_So_Gio*So_Tien_Moi_Gio;
        }
    }
    printf("Tien phai tra la: %d", Tien);

}
int Chuc_Nang4(float kWh)//Bai 4 Chuc nang tinh tien dien
{

    const int BAC1 = 50;
    const int BAC2 = 100;
    const int BAC3 = 200;
    const int BAC4 = 300;
    const int BAC5 = 400;
    if(kWh >= 0 && kWh <= BAC1)
    {
        printf("Bac 1\nTien phai tra: %.3f VND", kWh*1.678);
    }
    else if (kWh >= 51 && kWh <= BAC2)
    {
        printf("Bac 2\nTien phai tra: %.3f VND", 50*1.678 + (kWh - 50)*1.734);
    }
    else if (kWh >= 101 && kWh <= BAC3)
    {
        printf("Bac 3\nTien phai tra: %.3f VND", 50*1.678 + 50*1.734 + (kWh - 100)*2.014);
    }
    else if (kWh >= 201 && kWh <= BAC4)
    {
        printf("Bac 4\nTien phai tra: %.3f VND", 50*1.678 + 50*1.734 + 100*2.014 + (kWh - 200)*2.536);
    }
    else if (kWh >= 301 && kWh <= BAC5)
    {
        printf("Bac 5\nTien phai tra: %.3f VND", 50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + (kWh - 300)*2.834);
    }
    else 
    {
        printf("Bac 6\nTien phai tra: %.3f VND", 50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + 100*2.834 + (kWh - 400)*2.927);
    }
    
    return 0;
}
void Chuc_Nang5()//Dang cap nhat!
{
    printf("Dang cap nhat...");
}
void Chuc_Nang6()//Dang cap nhat!
{
    printf("Dang cap nhat...");
}
void Chuc_Nang7()
{
    printf("Dang cap nhat...");
}
void Chuc_Nang8()//Dang cap nhat!
{
    printf("Dang cap nhat...");
}
void Chuc_Nang9()//Dang cap nhat!
{
    printf("Dang cap nhat...");
}
void Chuc_Nang10()//Dang cap nhat!
{
    printf("Dang cap nhat...");
}
int main()//Ham chinh
{
    unsigned int menu;
    do
    {
        Menu:
        system("cls"), system("color c");
        printf("______________________MENU______________________\n");
        printf("Chuc nang 1: Kiem tra so nguyen \n");
        printf("Chuc nang 2: Tim uoc so chung va boi so chung cua 2 so\n");
        printf("Chuc nang 3: Chuong trinh tinh tien karaoke\n");
        printf("Chuc nang 4: Chuong trinh tinh tien dien\n");
        printf("Chuc nang 5: Chuong trinh doi tien\n");
        printf("Chuc nang 6: Tinh lai xuat vay ngan hang tra gop\n");
        printf("Chuc nang 7: Chuong trinh vay tien mua xe\n");
        printf("Chuc nang 8: Sap xep thong tin sinh vien\n");
        printf("Chuc nang 9: FPOLY-LOTT game (2/15)\n");
        printf("Chuc nang 10: Tinh toan phan so\n");
        printf("Xin moi chon: "), scanf("%u", &menu);
        if(menu>=10)
        {
            printf("Vui long thu lai!\n");
            usleep(10000*100);
        }
        else
        {
            continue;
        }
    } while (menu>=10);
    switch (menu)
    {
    case 1:
        Chuc_Nang1();
        break;
    case 2:
        system("cls");
        Chuc_Nang2();
        break;
    case 3:
        int Bat_Dau, Ket_Thuc;
        do
        {
            system("cls");
            printf("Chuc nang 3: Chuong trinh tinh tien karaoke\n");
            printf("Gio bat dau: "), scanf("%d", &Bat_Dau);
            printf("Gio ket thuc: "), scanf("%d", &Ket_Thuc);
        } while (Bat_Dau <= 12 || Ket_Thuc >= 23);//Quan chi hoat dong tu 12 -23h =. min 12 - max 23
        Chuc_Nang3(Bat_Dau, Ket_Thuc);
        break;
    case 4:
        float kWh;
        system("cls");
        printf("Chuc nang 4: Chuong trinh tinh tien dien\n");
        printf("Nhap so kWh: "), scanf("%f", &kWh);
        Chuc_Nang4(kWh);
        break;
    case 5:
        Chuc_Nang5();
        usleep(10000*100);
        goto Menu;
        break;
    case 6:
        Chuc_Nang6();
        usleep(10000*100);
        goto Menu;
        break;
    case 7:
        Chuc_Nang7();
        usleep(10000*100);
        goto Menu;
        break;
    case 8:
        Chuc_Nang8();
        usleep(10000*100);
        goto Menu;
        break;
    case 9:
        Chuc_Nang9();
        usleep(10000*100);
        goto Menu;
        break;
    default:
        Chuc_Nang10();
        usleep(10000*100);
        goto Menu;
        break;
    }
    return 0;
}
