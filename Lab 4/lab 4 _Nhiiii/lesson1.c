#include <stdio.h>//LE DO Y NHI_ PH34335
#include<unistd.h>
int main()
{
    int min, max;
    int i = min;
    system("cls");
    float Tong = 0, Dem = 0, Trung_Binh;
    printf("Min: "), scanf("%d", &min);
    printf("Max: "), scanf("%d", &max);
    while(i<=max)
    {
        if(i%2==0)
        {
            Tong+=i;
            Dem ++;
        }
        i++;
    }
    Trung_Binh = Tong/Dem ;
    printf("Trung binh: %g", Trung_Binh);
}