#include<stdio.h>//NONG HOANG VU_PH33405
#include<unistd.h>
int main()
{
    int x, i, count = 0;
    system("cls"), system("color 1");
    printf("Number X: "), scanf("%d", &x);
    for(i=2; i<x; i++)
    {
        if(x%i==0)
        {count++;}
        else if (count==0)
        {
            printf("%d is a prime number", x);
            break;
        }
        else
        {
            printf("%d is not a prime number", x);
            break;
        }
        
    }
}