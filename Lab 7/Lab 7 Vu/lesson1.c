#include <stdio.h>//NONG HOANG VU_PH33506
#include <string.h>
#include <ctype.h>
void main()
{
    char STRING[20];
    system("cls");
    printf("Enter a string: "), gets(STRING);
    int Vowels = 0, Consonants = 0;
    for (int i = 0; i < strlen(STRING); i++)
    {
        char a = tolower(STRING[i]); // Get uppercase characters
        if (isalpha(a))              // Check for whitespace
        {
            if (a == 'a' || a == 'u' || a == 'i' || a == 'e' || a == 'o')
            {
                Vowels++;
            }
            else
            {
                Consonants++;
            }
        }
    }
    printf("String [ %s ] contains %d vowels and %d consonants", STRING, Vowels, Consonants);
}