#include <stdio.h>
#include <string.h>
struct Login
{
	char username[20];
	char password[20];
} Submit;
void main()
{
	printf("Username: "), gets(Submit.username);
	printf("Password: "), gets(Submit.password);
	if (strcmp(Submit.username, "admin") == 0 && strcmp(Submit.password, "123") == 0)
	{
		puts("Login Success");
	}
	else
	{
		puts("Login Failed");
	}
}