#include<stdio.h>//NONG HOANG VU_PH33506
#include<stdlib.h>
#include<unistd.h>
int lesson1()//Average total
{
    int min, max;
    int i = min;
    float sum = 0, count = 0;

    printf("Min: "), scanf("%d", &min);
    printf("Max: "), scanf("%d", &max);
    while(i<=max)
    {
        if(i%2==0)
        {
            sum+=i;
            count ++;
        }
        i++;
    }
    printf("Average: %g", sum/count);
}
int lesson2()//Find prime number
{
    int x, i, count = 0;
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
    return 0;
}
int lesson3()//Find square number
{
    int x, i, count =0;
    printf("Number X: "), scanf("%d", &x);
    for(i=1; i<x; i++)
    {
        if(i*i==x)
        {
            printf("%d is a square number", x);
            break;
        }
    }
    return 0;
}
int main()
{
    int menu;
    do
    {
        system("cls"), system("color 1");
        printf("=================MENU=================\n");
        printf("Control function 1: Average total\n");
        printf("control function 2: Find prime number\n");
        printf("control function 3: Find square number\n");
        printf("control function 4: Exit\n");
        printf("Select function (1, 2, 3, 4): "), scanf("%d", &menu);
        if(!(menu<=4))
        {
            printf("Please try again...\n");
            usleep(10000*100);
        }
        else
        {
            continue;
        }
    } while (!(menu<=4));
    switch (menu)
    {
    case 1:
        system("cls");
        printf("Control function 1: Average total\n");
        lesson1();
        break;
    case 2:
        system("cls");
        printf("control function 2: Find prime number\n");
        lesson2();
        break;
    case 3:
        system("cls");
        printf("control function 3: Find square number\n");
        lesson3();
        break;
    default:
        printf("Exit the program successfully!");
        break;
    }
    return 0;
}