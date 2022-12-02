#include<stdio.h>//NONG HOANG VU
void Check_Years(int Years)
{
    if (Years % 400 == 0 || Years % 4==0 && Years%100!=0)
    {printf("%d is leap year.", Years);}
    else{printf("%d is not leap year.", Years);}
}
int main()
{
    int Years;
    printf("Please enter year: "), scanf("%d", &Years);
    Check_Years(Years);
    return 0;
}