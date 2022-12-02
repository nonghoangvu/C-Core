#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int Greatest_common_divisor(int a, int b)
{
    if(a==0 || b==0)
    {
        return a + b;
    }
    while (a != b)
    {
        if(a>b)
        {
            a = a - b;
            return a;
        }
        else{b = b - a;}
    }
    return a;
}
int Least_common_multiple(int a,int b)
{
    return a * b / Greatest_common_divisor(a,b);
}
int Integer(float number)
{
    int check = -1;
    if(number == (int)number)
    {
        check = 1;
    }else
    {
        check = -1;
    }
    return check;
}
void Prime(int number)
{
    int count = 0;
    for(int i = 2; i < number / 2; i++)
    {
        if(number % i == 0)
        {
            count++;
        }
    }
    if(number<2)
    {
        printf("%d is not prime\n", number);
    }else
    {
        if(count == 0)
        {
            printf("%d is prime\n", number);
        }else
        {
            printf("%d is not prime\n", number);
        }
    }
}
void Square(int number)
{
    int check = -1;
    for(int i = 2; i <= number / 2; i++)
    {
        if(i * i == number)
        {
            check = 1;
            break;
        }
    }
    if(check == 1)
    {
        printf("%d is square\n", number);
    }else
    {
        printf("%d is not square\n", number);
    }
}
int Control1()
{
    system("cls");
    printf("Control function 1: Integer check\n");
    float number;
    printf("Number x: "), scanf("%f", &number);
    int Check_integer = Integer(number);
    if(Check_integer > 0)
    {
        printf("%g is integer\n", number);
        Prime(number);
        Square(number);
    }else
    {
        printf("%g is not interger\n", number);
    }
}
int Control2()
{
    int x,y;
    printf("Control function 2: Find the common divisor and common multiple of 2 numbers\n");
    printf("Number x: "), scanf("%d", &x);
    printf("Number y: "), scanf("%d", &y);
    int GreatesCommonDivisor = Greatest_common_divisor(x,y);
    int LeastCommonMultiple = Least_common_multiple(x,y);
    printf("The greatest common divisor is %d", GreatesCommonDivisor);
    printf("\nThe least common multiple is %d ", LeastCommonMultiple);
}
void Control3(int start, int end)
{
    const int Amount_per_hour = 150000;
    int total_hours, money, promotion, gold_promotion;
    total_hours = end -start;
    if(start>=14&&start<=18)
    {
        printf("Golden hour promotion 10%\n");
        if(total_hours>3)
        {
            printf("More than 3 hours\n");
            promotion = (total_hours - 3)*0.3 * Amount_per_hour;
            money = total_hours * Amount_per_hour - promotion;
            printf("More than %d hour => Money promotion %d\n", total_hours-3,promotion);
        }else
        {
            money = total_hours*Amount_per_hour;
        }
        gold_promotion = money*0.1;
        printf("Money before gold promotion: %d\n", money);
        printf("Money gold promotion: %d\n", gold_promotion);
        money = money - gold_promotion;
    }else
    {
        if(total_hours>3)
        {
            printf("More than 3 hours\n");
            promotion = (total_hours - 3)*0.3 * Amount_per_hour;
            money = total_hours * Amount_per_hour - promotion;
            printf("More than %dh => Money promotion %d\n", total_hours-3,promotion);
        }else
        {
            money = total_hours*Amount_per_hour;
        }
    }
    printf("The amount to be paid is: %d", money);

}
int Control4(float kWh)
{

    const int LEVEL1 = 50;
    const int LEVEL2 = 100;
    const int LEVEL3 = 200;
    const int LEVEL4 = 300;
    const int LEVEL5 = 400;
    if(kWh >= 0 && kWh <= LEVEL1)
    {
        printf("LEVEL 1\nMoney to be paid: %.3f VND", kWh*1.678);
    }
    else if (kWh >= 51 && kWh <= LEVEL2)
    {
        printf("LEVEL 2\nMoney to be paid: %.3f VND", 50*1.678 + (kWh - 50)*1.734);
    }
    else if (kWh >= 101 && kWh <= LEVEL3)
    {
        printf("LEVEL 3\nMoney to be paid: %.3f VND", 50*1.678 + 50*1.734 + (kWh - 100)*2.014);
    }
    else if (kWh >= 201 && kWh <= LEVEL4)
    {
        printf("LEVEL 4\nMoney to be paid: %.3f VND", 50*1.678 + 50*1.734 + 100*2.014 + (kWh - 200)*2.536);
    }
    else if (kWh >= 301 && kWh <= LEVEL5)
    {
        printf("LEVEL 5\nMoney to be paid: %.3f VND", 50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + (kWh - 300)*2.834);
    }
    else 
    {
        printf("LEVEL 6\nMoney to be paid: %.3f VND", 50*1.678 + 50*1.734 + 100*2.014 + 100*2.536 + 100*2.834 + (kWh - 400)*2.927);
    }
    
    return 0;
}
void Control5()
{
    float Denominations[] = {500, 200, 100,50, 20, 10, 5, 2, 1 };
    int AmountMoney, Amount;
    const int MAX = 9;
    printf("Amount of Money: "), scanf("%d", &AmountMoney);
    while (AmountMoney)
    {
        for(int i = 0; i < MAX; i++)
        {
            Amount = AmountMoney/Denominations[i];
            if(Amount != 0)
            {
                printf("Have %d Paper money %.3f VND\n", Amount, Denominations[i]);
            }
            AmountMoney = AmountMoney - Amount * Denominations[i];
        }
    }                
}
void Control6()
{
    printf("waiting update...");
}
void Control7()
{
    printf("waiting update...");
}
void Control8()
{
    printf("waiting update...");
}
void Control9()
{
    printf("waiting update...");
}
void Control10()
{
    printf("waiting update...");
}
//main
int main()
{
    unsigned int menu;
    do
    {
        Menu:
        system("cls"), system("color 1");
        printf("=================MENU=================\n");
        printf("Control function 0: Exit\n");
        printf("Control function 1: Integer check\n");
        printf("control function 2: Find the common divisor and common multiple of 2 numbers\n");
        printf("control function 3: Karaoke bar billing program\n");
        printf("control function 4: Electricity bill\n");
        printf("control function 5: Currency exchange function\n");
        printf("control function 6: Function to calculate interest rates on bank loans installment\n");
        printf("control function 7: Car loan program\n");
        printf("control function 8: Sort student information\n");
        printf("control function 9: F_POLY - LOTT game (2/15)\n");
        printf("control function 10: Fraction program\n");
        printf("Select function: "), scanf("%u", &menu);
        if(!(menu<=10))
        {
            printf("Please try again...\n");
            usleep(10000*100);
        }
        else
        {
            continue;
        }
    } while (!(menu<=10));
    switch (menu)
    {
    case 1:
        Control1();
        break;
    case 2:
        system("cls");
        Control2();
        break;
    case 3:
        int start, end;
        do
        {
            system("cls");
            printf("Control function 3: Karaoke bar billing program\n");
            printf("Start time: "), scanf("%d", &start);
            printf("Time end: "), scanf("%d", &end);
        } while (start <= 12 || end >= 23 && start > end);
        Control3(start, end);
        break;
    case 4:
        float kWh;
        system("cls");
        printf("Control function 4: Electricity bill\n");
        printf("Number of kWh: "), scanf("%f", &kWh);
        Control4(kWh);
        break;
    case 5:
        Control5();
        usleep(10000*100);
        goto Menu;
        break;
    case 6:
        Control6();
        usleep(10000*100);
        goto Menu;
        break;
    case 7:
        Control7();
        usleep(10000*100);
        goto Menu;
        break;
    case 8:
        Control8();
        usleep(10000*100);
        goto Menu;
        break;
    case 9:
        Control9();
        usleep(10000*100);
        goto Menu;
        break;
    default:
        Control10();
        usleep(10000*100);
        goto Menu;
        break;
    }
    return 0;
}
