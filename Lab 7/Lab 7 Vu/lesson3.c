#include <stdio.h>//NONG HOANG VU_PH33506
#include <string.h>
void GET(char STRING[][20])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a string %d: ", i + 1), gets(STRING[i]);
    }
}
void SHOW(char STRING[][20])
{
    for (int j = 0; j < 5; j++)
    {
        printf(" %s |", STRING[j]);
    }
}
void SORT(char STRING[][20])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(STRING[i], STRING[j]) > 0)
            {
                char temp[20];
                strcpy(temp, STRING[i]);
                strcpy(STRING[i], STRING[j]);
                strcpy(STRING[j], temp);
            }
        }
    }
}
void main()
{
    char STRING[5][20];
    GET(STRING);
    printf("\nThe entered string is unsorted: "), SHOW(STRING);
    printf("\nThe string after sorting is: "), SORT(STRING), SHOW(STRING);
}