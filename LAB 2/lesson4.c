#include <stdio.h>//Nong Hoang Vu_PH33506
int main(){
    float math, physics, chemistry;
    printf("Math: "), scanf("%f", &math), printf("Physics: "), scanf("%f", &physics), printf("Chemistry: "), scanf("%f", &chemistry);
    printf("Average: %.2f", ((math*3)+(physics*2)+chemistry)/6);
    return 0;}