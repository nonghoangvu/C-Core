#include <stdio.h>//LE DO Y NHI_PH3435
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <conio.h>
typedef struct PHANSO
{
    float Tu;
    float Mau;
} PHANSO;

PHANSO CONG(PHANSO So1, PHANSO So2)
{
    PHANSO Cong;
    Cong.Tu = So1.Tu * So2.Mau + So2.Tu * So1.Mau;
    Cong.Mau = So1.Mau * So2.Mau;
    return Cong;
}

PHANSO TRU(PHANSO So1, PHANSO So2)
{
    PHANSO Tru;
    Tru.Tu = So1.Tu * So2.Mau - So2.Tu * So1.Mau;
    Tru.Mau = So1.Mau * So2.Mau;
    return Tru;
}

PHANSO NHAN(PHANSO So1, PHANSO So2)
{
    PHANSO Nhan;
    Nhan.Tu = So1.Tu * So2.Tu;
    Nhan.Mau = So1.Mau * So2.Mau;
    return Nhan;
}
PHANSO CHIA(PHANSO So1, PHANSO So2)
{
    PHANSO Chia;
    Chia.Tu = So1.Tu * So2.Mau;
    Chia.Mau = So1.Mau * So2.Tu;
    return Chia;
}
void NHAP_PHAN_SO(PHANSO *So)
{
    printf("Nhap tu va mau: ");
    scanf("%f%f", &(*So).Tu, &(*So).Mau);
}
void HIEN_THI_PHAN_SO(PHANSO So)
{
    printf("%g/%g", So.Tu, So.Mau);
}
void Show(PHANSO So1, PHANSO So2, PHANSO Result, char *operator)
{
    printf("\n");
    HIEN_THI_PHAN_SO(So1);
    printf("%s", operator);
    HIEN_THI_PHAN_SO(So2);
    printf(" = ");
    HIEN_THI_PHAN_SO(Result);
}
void HIEU_UNG()
{
    printf("Dang tai.  \r"), usleep(1000 * 400);
    printf("Dang tai.. \r"), usleep(1000 * 400);
    printf("Dang tai...\r"), usleep(1000 * 400);
}
struct SINHVIEN
{
    char ten[30];
    float diemTB;
};
char *HOC_LUC(float diemTB)
{
    char *HocLuc;
    if (diemTB >= 9)
    {
        HocLuc = "Xuat sac";
    }
    else if (diemTB >= 8)
    {
        HocLuc = "Gioi";
    }
    else if (diemTB >= 6.5)
    {
        HocLuc = "Kha";
    }
    else if (diemTB >= 5)
    {
        HocLuc = "Trung binh";
    }
    else
    {
        HocLuc = "Kem";
    }
    return HocLuc;
}
void SAP_XEP(struct SINHVIEN DANHSACSV[], int SOLUONG)
{
    for (int i = 0; i < SOLUONG; i++)
    {
        for (int j = i + 1; j < SOLUONG; j++)
        {
            if (DANHSACSV[i].diemTB > DANHSACSV[j].diemTB)
            {
                struct SINHVIEN temp = DANHSACSV[i];
                DANHSACSV[i] = DANHSACSV[j];
                DANHSACSV[j] = temp;
            }
        }
    }
}
void DANHSACHSV(struct SINHVIEN DANHSACHSV[], int *SOLUONG)
{
    printf("Nhap So sinh vien: "), scanf("%d", SOLUONG);
    for (int i = 0; i < *SOLUONG; i++)
    {
        fflush(stdin);
        printf("\nSinh Vien so %d\n", i + 1);
        printf("Ten sinh vien: "), gets(DANHSACHSV[i].ten);
        printf("Diem trung binh: "), scanf("%f", &DANHSACHSV[i].diemTB);
    }
}
void HIENTHIDS_SV(struct SINHVIEN DANHSACHSV[], int SOLUONG)
{
    printf("\n_________________________________________________________________\n");
    printf("\nSTT         Ten               Diem TB          Hoc luc\n");
    for (int i = 0; i < SOLUONG; i++)
    {
        printf("%2d ", i + 1);
        printf("%18s ", DANHSACHSV[i].ten);
        printf("%13.1f ", DANHSACHSV[i].diemTB);
        printf("%18s ", HOC_LUC(DANHSACHSV[i].diemTB));
        printf("\n");
    }
    printf("\n__________________________________________________________________\n");
}
int UCLN(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
            return a;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int BSCNN(int a, int b)
{
    return a * b / UCLN(a, b);
}
int SONGUYEN(float So)
{
    int KiemTra = -1;
    if (So == (int)So)
    {
        KiemTra = 1;
    }
    else
    {
        KiemTra = -1;
    }
    return KiemTra;
}
void SONGUYENTO(int So)
{
    int dem = 0;
    for (int i = 2; i < So / 2; i++)
    {
        if (So % i == 0)
        {
            dem++;
        }
    }
    if (So < 2)
    {
        printf("'%d' Khong la Nguyen to\n", So);
    }
    else
    {
        if (dem == 0)
        {
            printf("'%d' La Nguyen to\n", So);
        }
        else
        {
            printf("'%d' Khong la Nguyen to\n", So);
        }
    }
}
void SOCHINHPHUONG(int So)
{
    int check = -1;
    for (int i = 2; i <= So / 2; i++)
    {
        if (i * i == So)
        {
            check = 1;
        }
    }
    if (check == 1)
    {
        printf("'%d' La so chinh phuong\n", So);
    }
    else
    {
        printf("'%d' Khong phai la so hinh phuong\n", So);
    }
}
int CHUC_NANG_1()
{
    float So;
    printf("\nSo x: "), scanf("%f", &So);
    int KiemTraSoNguyen = SONGUYEN(So);
    if (KiemTraSoNguyen > 0)
    {
        printf("'%g' La so nguyen\n", So);
        SONGUYENTO(So);
        SOCHINHPHUONG(So);
    }
    else
    {
        printf("'%g' Khong phai la so nguyen\n", So);
    }
}
int CHUC_NANG_2()
{
    int x, y;
    printf("So x: "), scanf("%d", &x);
    printf("So y: "), scanf("%d", &y);
    int Ucln = UCLN(x, y);
    int Bcnn = BSCNN(x, y);
    printf("Uoc chung lon nhat la %d", Ucln);
    printf("\nUoc chung nho nhat la %d \n", Bcnn);
}
void CHUC_NANG_3(int BatDau, int KetThuc)
{
    const int SoTienMoiGio = 150000;
    int TongGio, Tien, KhuyenMai, KhuyenMaiVang;
    TongGio = KetThuc - BatDau;
    if (BatDau >= 14 && BatDau <= 18)
    {
        printf("Khuyen mai gio vang 10%\n");
        if (TongGio > 3)
        {
            printf("Hon 3 gio\n");
            KhuyenMai = (TongGio - 3) * 0.3 * SoTienMoiGio;
            Tien = TongGio * SoTienMoiGio - KhuyenMai;
            printf("Nhieu hon %d Gio => Tien Khuyen Mai %d\n", TongGio - 3, KhuyenMai);
        }
        else
        {
            Tien = TongGio * SoTienMoiGio;
        }
        KhuyenMaiVang = Tien * 0.1;
        printf("Tien khuyen mai truoc gio vang: %d\n", Tien);
        printf("Khuyen mai vang: %d\n", KhuyenMaiVang);
        Tien = Tien - KhuyenMaiVang;
    }
    else
    {
        if (TongGio > 3)
        {
            printf("Hon 3 gio\n");
            KhuyenMai = (TongGio - 3) * 0.3 * SoTienMoiGio;
            Tien = TongGio * SoTienMoiGio - KhuyenMai;
            printf("Nhieu hon %d Gio => Tien Khuyen Mai %d\n", TongGio - 3, KhuyenMai);
        }
        else
        {
            Tien = TongGio * SoTienMoiGio;
        }
    }
    printf("So tien phai tra: %d\n", Tien);
}
int CHUC_NANG_4(float kWh)
{

    const int CAP1 = 50;
    const int CAP2 = 100;
    const int CAP3 = 200;
    const int CAP4 = 300;
    const int CAP5 = 400;
    if (kWh >= 0 && kWh <= CAP1)
    {
        printf("CAP 1\nSo tien phai tra: %.3f VND\n", kWh * 1.678);
    }
    else if (kWh >= 51 && kWh <= CAP2)
    {
        printf("CAP 2\nSo tien phai tra: %.3f VND\n", 50 * 1.678 + (kWh - 50) * 1.734);
    }
    else if (kWh >= 101 && kWh <= CAP3)
    {
        printf("CAP 3\nSo tien phai tra: %.3f VND\n", 50 * 1.678 + 50 * 1.734 + (kWh - 100) * 2.014);
    }
    else if (kWh >= 201 && kWh <= CAP4)
    {
        printf("CAP 4\nSo tien phai tra: %.3f VND\n", 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (kWh - 200) * 2.536);
    }
    else if (kWh >= 301 && kWh <= CAP5)
    {
        printf("CAP 5\nSo tien phai tra: %.3f VND\n", 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (kWh - 300) * 2.834);
    }
    else
    {
        printf("CAP 6\nSo tien phai tra: %.3f VND\n", 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (kWh - 400) * 2.927);
    }

    return 0;
}
void CHUC_NANG_5()
{
    float MenhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int LuonTien, SoLuong;
    const int MAX = 9;
    printf("So tien: "), scanf("%d", &LuonTien);
    while (LuonTien)
    {
        for (int i = 0; i < MAX; i++)
        {
            SoLuong = LuonTien / MenhGia[i];
            if (SoLuong != 0)
            {
                printf("Co %d to %.3f VND\n", SoLuong, MenhGia[i]);
            }
            LuonTien = LuonTien - SoLuong * MenhGia[i];
        }
    }
}
void CHUC_NANG_6(int TienVay)
{
    int LoiNhuan, TienGoc, TienPhi, SoDu;
    TienGoc = TienVay / 12;
    SoDu = TienVay;
    printf("_____________________________________________________________________________________________\n");
    printf("\nKy han     Lai phai tra     Goc phai tra     So tien phai tra     So tien con lai\n");
    for (int i = 1; i <= 12; i++)
    {
        LoiNhuan = SoDu * 0.05;
        TienPhi = TienGoc + LoiNhuan;
        SoDu = SoDu - TienGoc;
        printf("_____________________________________________________________________________________________\n");
        printf("%4d ", i + 1);
        printf("%12d ", LoiNhuan);
        printf("%18d ", TienGoc);
        printf("%25d ", TienPhi);
        printf("%20d ", SoDu);
        printf("\n");
    }
    printf("_____________________________________________________________________________________________\n\n");
}
void CHUC_NANG_7(float LaiSuatChoVay)
{
    double TraTruoc = 1.0 - LaiSuatChoVay;
    double Tien = 5000000;
    double LoiNhuanThang = 0.072 / 12;
    int KyHan = 12;
    double TienTraTruoc = Tien * TraTruoc;
    Tien = Tien - TienTraTruoc;
    double SoTienThanhToanHangThang = Tien / KyHan;
    printf("So tien tra truoc: %.2f\n", TienTraTruoc);
    printf("So tien thanh toan hang thang \n");
    printf("_____________________________________________________________________________________________\n");
    printf("\nKy han     Lai phai tra     Goc phai tra     So tien phai tra     So tien con lai\n");
    for (int i = 1; i <= KyHan; i++)
    {
        double TienLai = Tien * LoiNhuanThang;
        double TongTien = TienLai + SoTienThanhToanHangThang;
        Tien = Tien - SoTienThanhToanHangThang;
        printf("_____________________________________________________________________________________________\n");
        printf("%4d ", i + 1);
        printf("%12.2f ", TienLai);
        printf("%18.2f ", SoTienThanhToanHangThang);
        printf("%25.2f ", TongTien);
        printf("%20.2f ", Tien);
        printf("\n");
    }
    printf("_____________________________________________________________________________________________\n\n");
}
void CHUC_NANG_8()
{
    struct SINHVIEN DANHSACH[30];
    int SoLuong;
    DANHSACHSV(DANHSACH, &SoLuong);
    printf("\n_________________________________________________________________\n");
    printf("Danh sach sin vien");
    HIENTHIDS_SV(DANHSACH, SoLuong);
    SAP_XEP(DANHSACH, SoLuong);
    printf("Danh sach sinh vien sau khi sap xep");
    HIENTHIDS_SV(DANHSACH, SoLuong);
}
void CHUC_NANG_9(int A, int B)
{
    int SoNgauNhien, dem = 0;
    srand(time(0));
    printf("So may man: ");
    for (int i = 0; i < 2; i++)
    {
        SoNgauNhien = rand() % 15;
        printf("| %d | ", SoNgauNhien);
        if (A == SoNgauNhien || B == SoNgauNhien)
        {
            dem++;
        }
    }
    printf("\n____________________________\n");
    if (dem == 0)
    {
        printf(">> Chuc ban may man lan sau.\n");
    }
    else
    {
        if (dem == 1)
        {
            printf(">> Ban co mot giai 2.\n");
        }
        else
        {
            printf(">> Ban co mot giai 1.\n");
        }
    }
}
void CHUC_NANG_10()
{
    PHANSO So1, So2;
    printf("Nhap phan so thu nhat\n");
    NHAP_PHAN_SO(&So1);
    printf("Nhap phan so thu hai\n");
    NHAP_PHAN_SO(&So2);

    PHANSO Cong = CONG(So1, So2);
    printf("\n\nCong hai so\n");
    Show(So1, So2, Cong, " + ");

    PHANSO Tru = TRU(So1, So2);
    printf("\n\nTru hai so\n");
    Show(So1, So2, Tru, " - ");

    PHANSO Nhan = NHAN(So1, So2);
    printf("\n\nNhan hai so\n");
    Show(So1, So2, Nhan, " * ");

    PHANSO Chia = CHIA(So1, So2);
    printf("\n\nChia hai so\n");
    Show(So1, So2, Chia, " / ");
}
void CHUC_NANG_11()
{
    int chon;
    printf("\n1. Tim nhat\n2. Xanh da troi\n3. Xanh la\n4. Thuy\n5. Do\n6. Do tia\n7. Vang\n8. Trang\n9. Xam\n10. Xanh nhat\n");
    printf("\n>> Chon mau >> ");
    scanf("%d", &chon);
    switch (chon)
    {
    case 1:
        system("color d");
        break;
    case 2:
        system("color 1");
        break;
    case 3:
        system("color 2");
        break;
    case 4:
        system("color 3");
        break;
    case 5:
        system("color 4");
        break;
    case 6:
        system("color 5");
        break;
    case 7:
        system("color 6");
        break;
    case 8:
        system("color 7");
        break;
    case 9:
        system("color 8");
        break;
    case 10:
        system("color 9");
        break;

    default:
        printf("Mau nay chua co san!\n");
        break;
    }
}
void main()
{
    unsigned int menu;
    char i;
    char MENU_CHINH[1];
    system("cls");
    for (int i = 0; i < 2; i++)
    {
        printf("Dang mo chuong trinh.  \r"), usleep(1000 * 400);
        printf("Dang mo chuong trinh.. \r"), usleep(1000 * 400);
        printf("Dang mo chuong trinh...\r"), usleep(1000 * 400);
    }
    do
    {
    Menu:
        system("cls");
        printf("_________________________________________MENU_________________________________________\n\n");
        printf("Chuc nang 0: Thoat\n");
        printf("Chuc nang 1: Kiem tra so nguyen\n");
        printf("Chuc nang 2: Tim uoc chung va boi chung cua hai so\n");
        printf("Chuc nang 3: Chuong trinh tinh tien cho quan karaoke\n");
        printf("Chuc nang 4: Tinh tien dien\n");
        printf("Chuc nang 5: Chuc nang doi tien\n");
        printf("Chuc nang 6: Tinh lai suat vay ngan hang vay tra gop\n");
        printf("Chuc nang 7: Chuong trinh vay tien mua xe\n");
        printf("Chuc nang 8: Sap xep thong tin sinh vien\n");
        printf("Chuc nang 9: F_POLY - LOTT game (2/15)\n");
        printf("Chuc nang 10: Tinh toan phan so\n");
        printf("Chuc nang 11: Mau sac\n");
        printf("Chon chuc nang (0 -> 11): "), scanf("%u", &menu);
        if (!(menu <= 11))
        {
            printf("Vui long thu lai...\n");
            usleep(10000 * 100);
        }
        else
        {
            continue;
        }
    } while (!(menu <= 11));
    while (1)
    {

        switch (menu)
        {
        case 0:
            for (unsigned int i = 3; i <= 3; i--)
            {
                printf("Thoat chuong trinh sau %d giay\r", i);
                usleep(10000 * 100);
            }
            system("cls");
            printf("Thoat chuong trinh thanh cong!");
            exit(0);
            break;
        case 1:
            HIEU_UNG();
        CASE1:
            system("cls");
            printf("_______________Kiem Tra So Nguyen_______________\n");
            CHUC_NANG_1();
            printf("\nBan co muon tro ve menu khong?? [Y/N]: "), fflush(stdin), gets(MENU_CHINH);
            if (strcmp(MENU_CHINH, "N") == 0 || strcmp(MENU_CHINH, "n") == 0)
            {
                goto CASE1;
            }
            else if (strcmp(MENU_CHINH, "Y") == 0 || strcmp(MENU_CHINH, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE1;
            }
        case 2:
            HIEU_UNG();
        CASE2:
            system("cls");
            printf("_______________Tim uoc chung va boi chung cua hai so_______________\n\n");
            CHUC_NANG_2();
            printf("\nBan co muon tro ve menu khong?? [Y/N]: "), fflush(stdin), gets(MENU_CHINH);
            if (strcmp(MENU_CHINH, "N") == 0 || strcmp(MENU_CHINH, "n") == 0)
            {
                goto CASE2;
            }
            else if (strcmp(MENU_CHINH, "Y") == 0 || strcmp(MENU_CHINH, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE2;
            }
        case 3:
            HIEU_UNG();
        CASE3:
            int BatDau, KetThuc;
            do
            {
                system("cls");
                printf("_______________Tinh Tien Cho Quan Karaoke_______________\n");
                printf("\nGio bat dau: "), scanf("%d", &BatDau);
                printf("Gio ket thuc: "), scanf("%d", &KetThuc);

            } while (BatDau <= 12 || KetThuc >= 23);
            if (BatDau >= KetThuc)
            {
                printf("Gio khong hop le!\n");
                system("pause");
            }
            else
            {
                CHUC_NANG_3(BatDau, KetThuc);
                printf("\nBan co muon tro ve menu khong?? [Y/N]: "), fflush(stdin), gets(MENU_CHINH);
                if (strcmp(MENU_CHINH, "N") == 0 || strcmp(MENU_CHINH, "n") == 0)
                {
                    goto CASE3;
                }
                else if (strcmp(MENU_CHINH, "Y") == 0 || strcmp(MENU_CHINH, "y") == 0)
                {
                    goto Menu;
                }
                else
                {
                    system("pause");
                    goto CASE3;
                }
            }
            goto Menu;
        case 4:
            HIEU_UNG();
        CASE4:
            system("cls");
            float kWh;
            printf("_______________Tinh Tien Dien_______________\n");
            printf("\nSo of kWh: "), scanf("%f", &kWh);
            CHUC_NANG_4(kWh);
            printf("\nBan co muon tro ve menu khong?? [Y/N]: "), fflush(stdin), gets(MENU_CHINH);
            if (strcmp(MENU_CHINH, "N") == 0 || strcmp(MENU_CHINH, "n") == 0)
            {
                goto CASE4;
            }
            else if (strcmp(MENU_CHINH, "Y") == 0 || strcmp(MENU_CHINH, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE4;
            }
        case 5:
            HIEU_UNG();
        CASE5:
            system("cls");
            printf("_______________Chuc Nang Doi Tien_______________\n");
            CHUC_NANG_5();
            printf("\nBan co muon tro ve menu khong?? [Y/N]: "), fflush(stdin), gets(MENU_CHINH);
            if (strcmp(MENU_CHINH, "N") == 0 || strcmp(MENU_CHINH, "n") == 0)
            {
                goto CASE5;
            }
            else if (strcmp(MENU_CHINH, "Y") == 0 || strcmp(MENU_CHINH, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE5;
            }
        case 6:
            HIEU_UNG();
        CASE6:
            system("cls");
            int TienVay;
            printf("_______________Tinh lai suat vay ngan hang vay tra gop_______________\n");
            printf("\nNhap so tien vay: "), scanf("%d", &TienVay);
            CHUC_NANG_6(TienVay);
            printf("\nBan co muon tro ve menu khong?? [Y/N]: "), fflush(stdin), gets(MENU_CHINH);
            if (strcmp(MENU_CHINH, "N") == 0 || strcmp(MENU_CHINH, "n") == 0)
            {
                goto CASE6;
            }
            else if (strcmp(MENU_CHINH, "Y") == 0 || strcmp(MENU_CHINH, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE6;
            }
        case 7:
            double LaiSuatChoVay;
            HIEU_UNG();
        CASE7:
            system("cls");
            printf("_______________Chuong trinh vay tien mua xe_______________\n\n");
            printf("\nNhap phan tram vay toi da (10% -> 0.1): "), scanf("%lf", &LaiSuatChoVay);
            CHUC_NANG_7(LaiSuatChoVay);
            printf("\nBan co muon tro ve menu khong? [Y/N]: "), fflush(stdin), gets(MENU_CHINH);
            if (strcmp(MENU_CHINH, "N") == 0 || strcmp(MENU_CHINH, "n") == 0)
            {
                goto CASE7;
            }
            else if (strcmp(MENU_CHINH, "Y") == 0 || strcmp(MENU_CHINH, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE7;
            }
        case 8:
            HIEU_UNG();
        CASE8:
            system("cls");
            printf("_______________Sap xep thong tin sinh vien_______________\n\n");
            CHUC_NANG_8();
            printf("\nBan co muon tro ve menu khong?? [Y/N]: "), fflush(stdin), gets(MENU_CHINH);
            if (strcmp(MENU_CHINH, "N") == 0 || strcmp(MENU_CHINH, "n") == 0)
            {
                goto CASE8;
            }
            else if (strcmp(MENU_CHINH, "Y") == 0 || strcmp(MENU_CHINH, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE8;
            }
        case 9:
            unsigned int A, B;
            char ChoiLai[1];
            HIEU_UNG();
        Game:
            system("cls");
            printf("_______________F_POLY - LOTT game (2/15)_______________\n\n");
            printf("So 1: "), scanf("%u", &A);
            printf("So 2: "), scanf("%u", &B);
            if (A > 15 || B > 15)
            {
                printf("Chi nhap so tu 0 -> 15\n");
                system("pause");
                goto Game;
            }
            else
            {
                CHUC_NANG_9(A, B);
                printf("\nBan co muon choi lai khong? [Y/N]: "), fflush(stdin), gets(ChoiLai);
                if (strcmp(ChoiLai, "Y") == 0 || strcmp(ChoiLai, "y") == 0)
                {
                    goto Game;
                }
                else if (strcmp(ChoiLai, "N") == 0 || strcmp(ChoiLai, "n") == 0)
                {
                    goto Menu;
                }
                else
                {
                    system("pause");
                    goto Game;
                }
            }
        case 10:
            HIEU_UNG();
        CASE10:
            system("cls");
            printf("_______________Tinh toan phan so_______________\n\n");
            CHUC_NANG_10();
            printf("\n");
            printf("\nBan co muon tro ve menu khong?? [Y/N]: "), fflush(stdin), gets(MENU_CHINH);
            if (strcmp(MENU_CHINH, "N") == 0 || strcmp(MENU_CHINH, "n") == 0)
            {
                goto CASE10;
            }
            else if (strcmp(MENU_CHINH, "Y") == 0 || strcmp(MENU_CHINH, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE10;
            }
        default:
            HIEU_UNG();
        CASE11:
            system("cls");
            printf("_______________Cai dat mau sac_______________\n");
            CHUC_NANG_11();
            printf("\nBan co muon tro ve menu khong?? [Y/N]: "), fflush(stdin), gets(MENU_CHINH);
            if (strcmp(MENU_CHINH, "N") == 0 || strcmp(MENU_CHINH, "n") == 0)
            {
                goto CASE11;
            }
            else if (strcmp(MENU_CHINH, "Y") == 0 || strcmp(MENU_CHINH, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE11;
            }
        }
    }
}
