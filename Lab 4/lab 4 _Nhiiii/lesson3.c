#include<stdio.h>//LE DO Y NHI_ PH34335
#include<unistd.h>
int main()
{
    int x, i, count =0;
    system("cls");
    printf("Nhap so X: "), scanf("%d", &x);
    for(i=1; i<x; i++)
    {
        if(i*i==x)
        {
            printf("%d la so chinh phuong", x);
            break;
        }
    }
}