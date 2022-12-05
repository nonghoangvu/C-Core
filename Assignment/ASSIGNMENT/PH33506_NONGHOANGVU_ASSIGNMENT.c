#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <conio.h>
typedef struct FRACTION
{
    float Numerator;
    float Denominator;
} FRACTION;

FRACTION ADDITION(FRACTION Number1, FRACTION Number2)
{
    FRACTION Addition;
    Addition.Numerator = Number1.Numerator * Number2.Denominator + Number2.Numerator * Number1.Denominator;
    Addition.Denominator = Number1.Denominator * Number2.Denominator;
    return Addition;
}

FRACTION SUBTRACTION(FRACTION Number1, FRACTION Number2)
{
    FRACTION Subtraction;
    Subtraction.Numerator = Number1.Numerator * Number2.Denominator - Number2.Numerator * Number1.Denominator;
    Subtraction.Denominator = Number1.Denominator * Number2.Denominator;
    return Subtraction;
}

FRACTION Multiplication(FRACTION Number1, FRACTION Number2)
{
    FRACTION Product;
    Product.Numerator = Number1.Numerator * Number2.Numerator;
    Product.Denominator = Number1.Denominator * Number2.Denominator;
    return Product;
}

FRACTION Division(FRACTION Number1, FRACTION Number2)
{
    FRACTION Quotient;
    Quotient.Numerator = Number1.Numerator * Number2.Denominator;
    Quotient.Denominator = Number1.Denominator * Number2.Numerator;
    return Quotient;
}

void GetFraction(FRACTION *Number)
{
    printf("Enter numerator and denominator: ");
    scanf("%f%f", &(*Number).Numerator, &(*Number).Denominator);
}

void ShowFraction(FRACTION Number)
{
    printf("%g/%g", Number.Numerator, Number.Denominator);
}

void Show(FRACTION Number1, FRACTION Number2, FRACTION Result, char *operator)
{
    printf("\n");
    ShowFraction(Number1);
    printf("%s", operator);
    ShowFraction(Number2);
    printf(" = ");
    ShowFraction(Result);
}

void LOAD()
{
    printf("Loading.  \r"), usleep(1000 * 400);
    printf("Loading.. \r"), usleep(1000 * 400);
    printf("Loading...\r"), usleep(1000 * 400);
}

struct STUDENT
{
    char name[30];
    float mediumScore;
};

char *Academic_Ability(float mediumScore)
{
    char *Classify;
    if (mediumScore >= 9)
    {
        Classify = "Excellent";
    }
    else if (mediumScore >= 8)
    {
        Classify = "Very good";
    }
    else if (mediumScore >= 6.5)
    {
        Classify = "Good";
    }
    else if (mediumScore >= 5)
    {
        Classify = "Average";
    }
    else
    {
        Classify = "Weak";
    }
    return Classify;
}

void SORT(struct STUDENT LIST[], int Amount)
{
    for (int i = 0; i < Amount; i++)
    {
        for (int j = i + 1; j < Amount; j++)
        {
            if (LIST[i].mediumScore > LIST[j].mediumScore)
            {
                struct STUDENT temp = LIST[i];
                LIST[i] = LIST[j];
                LIST[j] = temp;
            }
        }
    }
}

void ListStudent(struct STUDENT LIST[], int *Amount)
{
    printf("Enter amount student: "), scanf("%d", Amount);
    for (int i = 0; i < *Amount; i++)
    {
        fflush(stdin);
        printf("\nStudent Number %d\n", i + 1);
        printf("Name Student: "), gets(LIST[i].name);
        printf("Medium score: "), scanf("%f", &LIST[i].mediumScore);
    }
}

void ShowList(struct STUDENT LIST[], int Amount)
{
    printf("\n_________________________________________________________________\n");
    printf("\nNumber       Name          Medium Score          Academic\n");
    for (int i = 0; i < Amount; i++)
    {
        printf("%3d ", i + 1);
        printf("%17s ", LIST[i].name);
        printf("%13.1f ", LIST[i].mediumScore);
        printf("%22s ", Academic_Ability(LIST[i].mediumScore));
        printf("\n");
    }
    printf("\n__________________________________________________________________\n");
}

int Greatest_common_divisor(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
            return a;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int Least_common_multiple(int a, int b)
{
    return a * b / Greatest_common_divisor(a, b);
}

int Integer(float number)
{
    int check = -1;
    if (number == (int)number)
    {
        check = 1;
    }
    else
    {
        check = -1;
    }
    return check;
}

void Prime(int number)
{
    int count = 0;
    for (int i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (number < 2)
    {
        printf("'%d' IS NOT PRIME\n", number);
    }
    else
    {
        if (count == 0)
        {
            printf("'%d' IS PRIME\n", number);
        }
        else
        {
            printf("'%d' IS NOT PRIME\n", number);
        }
    }
}

void Square(int number)
{
    int check = -1;
    for (int i = 2; i <= number / 2; i++)
    {
        if (i * i == number)
        {
            check = 1;
        }
    }
    if (check == 1)
    {
        printf("'%d' IS SQUARE\n", number);
    }
    else
    {
        printf("'%d' IS NOT SQUARE\n", number);
    }
}

int Control1()
{
    float number;
    printf("\nNumber x: "), scanf("%f", &number);
    int Check_integer = Integer(number);
    if (Check_integer > 0)
    {
        printf("'%g' IS INTEGER\n", number);
        Prime(number);
        Square(number);
    }
    else
    {
        printf("'%g' IS NOT INTEGER\n", number);
    }
}

int Control2()
{
    int x, y;
    printf("Number x: "), scanf("%d", &x);
    printf("Number y: "), scanf("%d", &y);
    int GreatesCommonDivisor = Greatest_common_divisor(x, y);
    int LeastCommonMultiple = Least_common_multiple(x, y);
    printf("The greatest common divisor is %d", GreatesCommonDivisor);
    printf("\nThe least common multiple is %d \n", LeastCommonMultiple);
}

void Control3(int start, int end)
{
    const int Amount_per_hour = 150000;
    int total_hours, money, promotion, gold_promotion;
    total_hours = end - start;
    if (start >= 14 && start <= 18)
    {
        printf("Golden hour promotion 10%\n");
        if (total_hours > 3)
        {
            printf("More than 3 hours\n");
            promotion = (total_hours - 3) * 0.3 * Amount_per_hour;
            money = total_hours * Amount_per_hour - promotion;
            printf("More than %d hour => Money promotion %d\n", total_hours - 3, promotion);
        }
        else
        {
            money = total_hours * Amount_per_hour;
        }
        gold_promotion = money * 0.1;
        printf("Money before gold promotion: %d\n", money);
        printf("Money gold promotion: %d\n", gold_promotion);
        money = money - gold_promotion;
    }
    else
    {
        if (total_hours > 3)
        {
            printf("More than 3 hours\n");
            promotion = (total_hours - 3) * 0.3 * Amount_per_hour;
            money = total_hours * Amount_per_hour - promotion;
            printf("More than %dh => Money promotion %d\n", total_hours - 3, promotion);
        }
        else
        {
            money = total_hours * Amount_per_hour;
        }
    }
    printf("The amount to be paid is: %d\n", money);
}

int Control4(float kWh)
{

    const int LEVEL1 = 50;
    const int LEVEL2 = 100;
    const int LEVEL3 = 200;
    const int LEVEL4 = 300;
    const int LEVEL5 = 400;
    if (kWh >= 0 && kWh <= LEVEL1)
    {
        printf("LEVEL 1\nMoney to be paid: %.3f VND\n", kWh * 1.678);
    }
    else if (kWh >= 51 && kWh <= LEVEL2)
    {
        printf("LEVEL 2\nMoney to be paid: %.3f VND\n", 50 * 1.678 + (kWh - 50) * 1.734);
    }
    else if (kWh >= 101 && kWh <= LEVEL3)
    {
        printf("LEVEL 3\nMoney to be paid: %.3f VND\n", 50 * 1.678 + 50 * 1.734 + (kWh - 100) * 2.014);
    }
    else if (kWh >= 201 && kWh <= LEVEL4)
    {
        printf("LEVEL 4\nMoney to be paid: %.3f VND\n", 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (kWh - 200) * 2.536);
    }
    else if (kWh >= 301 && kWh <= LEVEL5)
    {
        printf("LEVEL 5\nMoney to be paid: %.3f VND\n", 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (kWh - 300) * 2.834);
    }
    else
    {
        printf("LEVEL 6\nMoney to be paid: %.3f VND\n", 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (kWh - 400) * 2.927);
    }

    return 0;
}

void Control5()
{
    float Denominations[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int AmountMoney, Amount;
    const int MAX = 9;
    printf("Amount of Money: "), scanf("%d", &AmountMoney);
    while (AmountMoney)
    {
        for (int i = 0; i < MAX; i++)
        {
            Amount = AmountMoney / Denominations[i];
            if (Amount != 0)
            {
                printf("Have %d Paper money %.3f VND\n", Amount, Denominations[i]);
            }
            AmountMoney = AmountMoney - Amount * Denominations[i];
        }
    }
}

void Control6(int moneyBorrow)
{
    int Profit, Principal, Charge, Overage;
    Principal = moneyBorrow / 12;
    Overage = moneyBorrow;
    printf("_____________________________________________________________________________________________\n");
    printf("\nPeriod     Pay again     Principal payable     Amount to be paid     The remaining amount\n");
    for (int i = 1; i <= 12; i++)
    {
        Profit = Overage * 0.05;
        Charge = Principal + Profit;
        Overage = Overage - Principal;
        printf("_____________________________________________________________________________________________\n");
        printf("%4d ", i + 1);
        printf("%12d ", Profit);
        printf("%18d ", Principal);
        printf("%25d ", Charge);
        printf("%20d ", Overage);
        printf("\n");
    }
    printf("_____________________________________________________________________________________________\n\n");
}

void ABOUT()
{
    printf("Mission project completed: Assignment\n");
    printf("Copyright by NONG HOANG VU\nStudent code: PH33506\nStudent at FPT Polytechnic");
}

void Control7(float loanRate)
{
    double Prepay = 1.0 - loanRate;
    double money = 5000000;
    double monthlyProfit = 0.072 / 12;
    int Period = 12;
    double moneyPrepay = money * Prepay;
    money = money - moneyPrepay;
    double Monthly_payment_amount = money / Period;
    printf("Prepayment amount: %.2f\n", moneyPrepay);
    printf("Monthly payment amount \n");
    printf("_____________________________________________________________________________________________\n");
    printf("\nPeriod     Pay again     Principal payable     Amount to be paid     The remaining amount\n");
    for (int i = 1; i <= Period; i++)
    {
        double payInterest = money * monthlyProfit;
        double total = payInterest + Monthly_payment_amount;
        money = money - Monthly_payment_amount;
        printf("_____________________________________________________________________________________________\n");
        printf("%4d ", i + 1);
        printf("%12.2f ", payInterest);
        printf("%18.2f ", Monthly_payment_amount);
        printf("%25.2f ", total);
        printf("%20.2f ", money);
        printf("\n");
    }
    printf("_____________________________________________________________________________________________\n\n");
}

void Control8()
{
    struct STUDENT LIST[30];
    int Amount;
    ListStudent(LIST, &Amount);
    printf("\n_________________________________________________________________\n");
    printf("Initial Student List");
    ShowList(LIST, Amount);
    SORT(LIST, Amount);
    printf("List after sorting by average score");
    ShowList(LIST, Amount);
}

void Control9(int A, int B)
{
    int RandomNumber, count = 0;
    srand(time(0));
    printf("Lucky number: ");
    for (int i = 0; i < 2; i++)
    {
        RandomNumber = rand() % 15;
        printf("| %d | ", RandomNumber);
        if (A == RandomNumber || B == RandomNumber)
        {
            count++;
        }
    }
    printf("\n____________________________\n");
    if (count == 0)
    {
        printf(">> Wish you luck next time.\n");
    }
    else
    {
        if (count == 1)
        {
            printf(">> You have the same prize 2.\n");
        }
        else
        {
            printf(">> You have the same prize 1.\n");
        }
    }
}

void Control10()
{
    FRACTION Number1, Number2;
    printf("Enter the first fraction\n");
    GetFraction(&Number1);
    printf("Enter the second fraction\n");
    GetFraction(&Number2);

    FRACTION Addition = ADDITION(Number1, Number2);
    printf("\n\nAddition 2 numbers\n");
    Show(Number1, Number2, Addition, " + ");

    FRACTION Subtraction = SUBTRACTION(Number1, Number2);
    printf("\n\nSubtraction 2 numbers\n");
    Show(Number1, Number2, Subtraction, " - ");

    FRACTION Product = Multiplication(Number1, Number2);
    printf("\n\nMultiply 2 numbers\n");
    Show(Number1, Number2, Product, " * ");

    FRACTION Quotient = Division(Number1, Number2);
    printf("\n\nDivision 2 numbers\n");
    Show(Number1, Number2, Quotient, " / ");
}

void Control11()
{
    int choice;
    printf("%2s1. BLACK%15s6. PURPLE%15s11. LIGHT_GREEN%15s16. LIGHT_WHITE%15s21. BLINK\n", "\033[0;30m", "\033[0;35m", "\033[1;32m", "\033[1;37m", "\033[5m");
    printf("%2s2. RED%17s7. CYAN%17s12. YELLOW%17s17. BOLD%22s22. NEGATIVE\n", "\033[0;31m", "\033[0;36m", "\033[1;33m", "\033[1m", "\033[7m");
    printf("%2s3. GREEN%15s8. LIGHT_GRAY%11s13. LIGHT_BLUE%13s18. FAINT%21s23. CROSSED\n", "\033[0;32m", "\033[0;37m", "\033[1;34m", "\033[2m", "\033[9m");
    printf("%2s4. BROWN%15s9. DARK_GRAY%12s14. LIGHT_PURPLE%11s19. ITALIC%20s24. END\n", "\033[0;33m", "\033[1;30m", "\033[1;35m", "\033[3m", "\033[0m");
    printf("%2s5. BLUE%15s10. LIGHT_RED%12s15. LIGHT_CYAN%13s20. UNDERLINE\n%s", "\033[0;34m", "\033[1;31m", "\033[1;36m", "\033[4m", "\033[0m");
    printf("\n>> Choice color >> ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\033[0;30m");
        break;
    case 2:
        printf("\033[0;31m");
        break;
    case 3:
        printf("\033[0;32m");
        break;
    case 4:
        printf("\033[0;33m");
        break;
    case 5:
        printf("\033[0;34m");
        break;
    case 6:
        printf("\033[0;35m");
        break;
    case 7:
        printf("\033[0;36m");
        break;
    case 8:
        printf("\033[0;37m");
        break;
    case 9:
        printf("\033[1;30m");
        break;
    case 10:
        printf("\033[1;31m");
        break;
    case 11:
        printf("\033[1;32m");
        break;
    case 12:
        printf("\033[1;33m");
        break;
    case 13:
        printf("\033[1;34m");
        break;
    case 14:
        printf("\033[1;35m");
        break;
    case 15:
        printf("\033[1;36m");
        break;
    case 16:
        printf("\033[1;37m");
        break;
    case 17:
        printf("\033[1m");
        break;
    case 18:
        printf("\033[2m");
        break;
    case 19:
        printf("\033[3m");
        break;
    case 20:
        printf("\033[4m");
        break;
    case 21:
        printf("\033[5m");
        break;
    case 22:
        printf("\033[7m");
        break;
    case 23:
        printf("\033[9m");
        break;
    case 24:
        printf("\033[0m");
        break;

    default:
        printf("Color not available!\n");
        break;
    }
}

void MENU()
{
    printf("_________________________________________MENU_________________________________________\n\n");
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
    printf("Control function 11: Color\n");
    printf("Control function 12: About\n");
}

void main()
{
    unsigned int menu;
    char HOME[1];
    system("cls");
    for (int i = 0; i < 3; i++)
    {
        printf("\033[0;31mOpening the program.  \r"), usleep(1000 * 400);
        printf("\033[0;32mOpening the program.. \r"), usleep(1000 * 400);
        printf("\033[0;33mOpening the program...\r\033[1;37m"), usleep(1000 * 400);
    }
    do
    {
    Menu:
        system("cls");
        MENU();
        printf("Select function (0 -> 12): "), scanf("%u", &menu);
        if (!(menu <= 12))
        {
            printf("Please try again...\n");
            usleep(10000 * 100);
        }
        else
        {
            continue;
        }
    } while (!(menu <= 12));
    while (1)
    {

        switch (menu)
        {
        case 0:
            printf("Exit confirmation?? [Y/N]: "), fflush(stdin), gets(HOME);
            if (strcmp(HOME, "N") == 0 || strcmp(HOME, "n") == 0)
            {
                goto Menu;
            }
            else if (strcmp(HOME, "Y") == 0 || strcmp(HOME, "y") == 0)
            {
                goto EXIT;
            }
            else
            {
                system("pause");
                goto Menu;
                break;
            }
        EXIT:
            for (unsigned int i = 3; i <= 3; i--)
            {
                printf("Exit the program after %d seconds\r", i);
                usleep(10000 * 100);
            }
            system("cls");
            printf("Exit the program successfully!");
            exit(0);
            break;
        case 1:
            LOAD();
        CASE1:
            system("cls");
            printf("_______________Integer check_______________\n");
            Control1();
            printf("\nDo you want to return to the Menu?? [Y/N]: "), fflush(stdin), gets(HOME);
            if (strcmp(HOME, "N") == 0 || strcmp(HOME, "n") == 0)
            {
                goto CASE1;
            }
            else if (strcmp(HOME, "Y") == 0 || strcmp(HOME, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE1;
            }
            break;
        case 2:
            LOAD();
        CASE2:
            system("cls");
            printf("_______________Find the common divisor and common multiple of 2 numbers_______________\n\n");
            Control2();
            printf("\nDo you want to return to the Menu?? [Y/N]: "), fflush(stdin), gets(HOME);
            if (strcmp(HOME, "N") == 0 || strcmp(HOME, "n") == 0)
            {
                goto CASE2;
            }
            else if (strcmp(HOME, "Y") == 0 || strcmp(HOME, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE2;
            }
        case 3:
            LOAD();
        CASE3:
            int start, end;
            do
            {
                system("cls");
                printf("_______________Karaoke bar billing program_______________\n");
                printf("\nStart time: "), scanf("%d", &start);
                printf("Time end: "), scanf("%d", &end);
            } while (start <= 12 || end >= 23);
            if (start >= end)
            {
                printf("Invalid time!\n");
                system("pause");
            }
            else
            {
                Control3(start, end);
                printf("\nDo you want to return to the Menu?? [Y/N]: "), fflush(stdin), gets(HOME);
                if (strcmp(HOME, "N") == 0 || strcmp(HOME, "n") == 0)
                {
                    goto CASE3;
                }
                else if (strcmp(HOME, "Y") == 0 || strcmp(HOME, "y") == 0)
                {
                    goto Menu;
                }
                else
                {
                    system("pause");
                    goto CASE3;
                }
            }
            goto Menu;
        case 4:
            LOAD();
        CASE4:
            system("cls");
            float kWh;
            printf("_______________Electricity bill_______________\n");
            printf("\nNumber of kWh: "), scanf("%f", &kWh);
            Control4(kWh);
            printf("\nDo you want to return to the Menu?? [Y/N]: "), fflush(stdin), gets(HOME);
            if (strcmp(HOME, "N") == 0 || strcmp(HOME, "n") == 0)
            {
                goto CASE4;
            }
            else if (strcmp(HOME, "Y") == 0 || strcmp(HOME, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE4;
            }
        case 5:
            LOAD();
        CASE5:
            system("cls");
            printf("_______________Currency exchange function_______________\n");
            Control5();
            printf("\nDo you want to return to the Menu?? [Y/N]: "), fflush(stdin), gets(HOME);
            if (strcmp(HOME, "N") == 0 || strcmp(HOME, "n") == 0)
            {
                goto CASE5;
            }
            else if (strcmp(HOME, "Y") == 0 || strcmp(HOME, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE5;
            }
        case 6:
            LOAD();
        CASE6:
            system("cls");
            int moneyBorrow;
            printf("_______________Function to calculate interest rates on bank loans installment_______________\n");
            printf("\nEnter the loan amount: "), scanf("%d", &moneyBorrow);
            Control6(moneyBorrow);
            printf("\nDo you want to return to the Menu?? [Y/N]: "), fflush(stdin), gets(HOME);
            if (strcmp(HOME, "N") == 0 || strcmp(HOME, "n") == 0)
            {
                goto CASE6;
            }
            else if (strcmp(HOME, "Y") == 0 || strcmp(HOME, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE6;
            }
        case 7:
            double loanRate;
            LOAD();
        CASE7:
            system("cls");
            printf("_______________Car loan program_______________\n\n");
            printf("\nEnter the maximum loan percentage: "), scanf("%lf", &loanRate);
            Control7(loanRate);
            printf("\nDo you want to return to the Menu?? [Y/N]: "), fflush(stdin), gets(HOME);
            if (strcmp(HOME, "N") == 0 || strcmp(HOME, "n") == 0)
            {
                goto CASE7;
            }
            else if (strcmp(HOME, "Y") == 0 || strcmp(HOME, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE7;
            }
        case 8:
            LOAD();
        CASE8:
            system("cls");
            printf("_______________Sort student information_______________\n\n");
            Control8();
            printf("\nDo you want to return to the Menu?? [Y/N]: "), fflush(stdin), gets(HOME);
            if (strcmp(HOME, "N") == 0 || strcmp(HOME, "n") == 0)
            {
                goto CASE8;
            }
            else if (strcmp(HOME, "Y") == 0 || strcmp(HOME, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE8;
            }
        case 9:
            unsigned int A, B;
            char playAgain[1];
            LOAD();
        Game:
            system("cls");
            printf("_______________F_POLY - LOTT game (2/15)_______________\n\n");
            printf("Number 1: "), scanf("%u", &A);
            printf("Number 2: "), scanf("%u", &B);
            if (A > 15 || B > 15)
            {
                printf("Only enter numbers from 0 -> 15\n");
                system("pause");
                goto Game;
            }
            else
            {
                Control9(A, B);
                printf("\nDo you want to play again? [Y/N]: "), fflush(stdin), gets(playAgain);
                if (strcmp(playAgain, "Y") == 0 || strcmp(playAgain, "y") == 0)
                {
                    goto Game;
                }
                else if (strcmp(playAgain, "N") == 0 || strcmp(playAgain, "n") == 0)
                {
                    goto Menu;
                }
                else
                {
                    system("pause");
                    goto Game;
                }
            }
        case 10:
            LOAD();
        CASE10:
            system("cls");
            printf("_______________Fraction program_______________\n\n");
            Control10();
            printf("\n");
            printf("\nDo you want to return to the Menu?? [Y/N]: "), fflush(stdin), gets(HOME);
            if (strcmp(HOME, "N") == 0 || strcmp(HOME, "n") == 0)
            {
                goto CASE10;
            }
            else if (strcmp(HOME, "Y") == 0 || strcmp(HOME, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE10;
            }
        case 11:
            LOAD();
        CASE11:
            system("cls");
            printf("_______________SET_COLOR_______________\n\n");
            Control11();
            printf("\nConfirm color change [Y/N]: "), fflush(stdin), gets(HOME);
            if (strcmp(HOME, "N") == 0 || strcmp(HOME, "n") == 0)
            {
                goto CASE11;
            }
            else if (strcmp(HOME, "Y") == 0 || strcmp(HOME, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto CASE11;
            }
        default:
            LOAD();
        About:
            system("cls");
            printf("_______________ABOUT_______________\n\n");
            ABOUT();
            printf("\n");
            printf("\nDo you want to return to the Menu?? [Y/N]: "), fflush(stdin), gets(HOME);
            if (strcmp(HOME, "N") == 0 || strcmp(HOME, "n") == 0)
            {
                goto About;
            }
            else if (strcmp(HOME, "Y") == 0 || strcmp(HOME, "y") == 0)
            {
                goto Menu;
            }
            else
            {
                system("pause");
                goto About;
            }
        }
    }
}
