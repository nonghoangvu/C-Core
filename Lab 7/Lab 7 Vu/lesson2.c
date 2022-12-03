#include<stdio.h>//NONG HOANG VU_PH33506
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
struct Login
{
	char username[20];
	char password[20];
}Submit;
void main()
{
	const char USERNAME[] = "admin";
	const char PASSWORD[] = "your_password";
	do
	{
		system("cls");
		puts("____________LOGIN____________\n");
		printf("Username: "), gets(Submit.username);
		printf("Password: "), gets(Submit.password);
		if (strcmp(Submit.username, USERNAME) == 0 && strcmp(Submit.password, PASSWORD) == 0)
		{
			puts("Login Success");
			break;
		}else
		{
			puts("Try again!");
			usleep(10000*100);
		}

	} while (1);
}