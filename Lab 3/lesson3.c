#include <stdio.h>
#define LEVEL1 50
#define LEVEL2 100
#define LEVEL3 200
#define LEVEL4 300
#define LEVEL5 400
int main()
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