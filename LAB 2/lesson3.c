#include <stdio.h>//Nong Hoang Vu_PH33506
#define PI 3.141592
int main()
{
    int R;
    printf("Ban Kinh: "), scanf("%d", &R);
    printf("Chu vi hinh tron la: %.2f\nDien tich hinh tron la: %.2f", R*2*PI, R*R*PI);
    return 0;
}