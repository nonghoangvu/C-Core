#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define LEVEL1 50
#define LEVEL2 100
#define LEVEL3 200
#define LEVEL4 300
#define LEVEL5 400
int lesson1()
{
    unsigned int marks;
    printf("Student's score: "), scanf("%u", &marks);
    if(marks <=10)
    {
        if (marks>=9) {printf("Excellent.");}
        else if (marks >= 8) {printf("Very good.");}
        else if (marks>=6.5){printf("Good.");}
        else if (marks >=5){ printf("Averageh.");}
        else if (marks >= 3.5){printf("Weak.");}
        else{printf("Poor.");}
    }
    else {printf("Invalid mark!");}
    return 0;
}
int lesson2()
{
    float a,b;
    printf("Number a: "), scanf("%f", &a);
    printf("Number b: "), scanf("%f", &b);
    if(a==0)
    {if (b==0){printf("Infinite equation.");}else{printf("Countless solutions.");}}
    else{printf("Equation with 1 solution x: %g", -b/a);}
    return 0;
}
int lesson3()
{
    float a,b,c, delta;
    printf("Number a: "), scanf("%f", &a);
    printf("Number b: "), scanf("%f", &b);
    printf("Number c: "), scanf("%f", &c);
    if(a==0)
    {
        if(b==0){if(c==0){printf("Infinite equation.");} else{printf("Countless solutions.");}}
        else{printf("Equation with 1 solution x = %g", -c/b);}  
    }
    else
    {
        delta = (b*b)-4*a*c;
        if (delta<0){printf("Countless solutions.");}
        else if (delta==0){printf("Equation with dual solution x = %g", -b/(2*a));}
        else{printf("The equation has 2 separate solutions\nX1 = %g\nX2 = %g", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));}
    }
}
int lesson4()
{
    float kWh;
    printf("[+] Number of kWh: "), scanf("%f", &kWh);
    if(kWh >= 0 && kWh <= LEVEL1)//LEVEL 1
    {
        printf("[-] LEVEL 1\n[-] Money to be paid: %.3f VND", kWh*1.678);
    }
    else if (kWh >= 51 && kWh <= LEVEL2)//LEVEL 2
    {
        printf("[-] LEVEL 2\n[-] Money to be paid: %.3f VND", 50*1.678 + (kWh - 50)*1.734);
    }
    else if (kWh >= 101 && kWh <= LEVEL3)//LEVEL 3
    {
        printf("[-] LEVEL 3\n[-] Money to be paid: %.3f VND", 50*1.678 + 50*1.734 + (kWh - 100)*2.014);
    }
    else if (kWh >= 201 && kWh <= LEVEL4)//LEVEL 4
    {
        printf("[-] LEVEL 4\n[-] Money to be paid: %.3f VND", 50*1.678 + 50*1.734 + 100*2.014 + (kWh - 200)*2.536);
    }
    else if (kWh >= 301 && kWh <= LEVEL5)//LEVEL 5
    {
        printf("[-] LEVEL 5\n[-] Money to be paid: %.3f VND", 50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + (kWh - 300)*2.834);
    }
    else //LEVEL 6
    {
        printf("[-] LEVEL 6\n[-] Money to be paid: %.3f VND", 50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + 100*2.834 + (kWh - 400)*2.927);
    }
    
    return 0;
}
int main()
{
    int selection;
    system("cls");
    printf("====== MENU ======\n");
    printf("1. Academic ranking.\n");
    printf("2. 1st order equation.\n");
    printf("3. 2st order equation.\n");
    printf("4. Electricity billing.\n");
    printf("Please select: "), scanf("%d", &selection);
    switch (selection)
    {
    case 1:
        system("cls"),printf("Academic ranking.\n") ,lesson1();
        break;
    case 2:
        system("cls"),printf("1st order equation.\n") ,lesson2();
        break;
    case 3:
        system("cls"),printf("2st order equation.\n") ,lesson3();
        break;
    case 4:
        system("cls"),printf("Electricity billing.\n") ,lesson4();
        break;
    default:
        printf("Invalid!");
        break;
    }
}