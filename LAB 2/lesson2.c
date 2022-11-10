#include <stdio.h>//Nong Hoang Vu_PH33506
int main()
{
    int x, y;
    printf("Chieu dai: "), scanf("%d", &x);
    printf("Chieu rong: "), scanf("%d", &y);
    printf("Chu vi hinh chu nhat la: %d\n", (x+y)*2);
    printf("Dien tich hinh chu nhat la: %d", x*y);
    return 0;
}