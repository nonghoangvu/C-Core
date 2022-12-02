#include<stdio.h>//LE DO Y NHI_ PH34335
#include<unistd.h>
int main()
{
    int x, i, count = 0;
    system("cls");
    printf("Nhap so X: "), scanf("%d", &x);
    for(i=2; i<x; i++)
    {
        if(x%i==0)
        {count++;}
        else if (count==0)
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
}