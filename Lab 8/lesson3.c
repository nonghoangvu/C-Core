
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct STUDENT
{
    char studentCode[10];
    char nameStudent[50];
    char major[100];
    float mediumScore;
};
int main()
{
    int N;
    system("cls");
    printf("Required number of students: "), scanf("%d", &N);
    struct STUDENT Student[N];
    for (int i = 0; i < N; i++)
    {
        printf("\nStudent number %d\n", i + 1);
        printf("Student code: "), fflush(stdin), gets(Student[i].studentCode);
        printf("Name Student: "), fflush(stdin), gets(Student[i].nameStudent);
        printf("Major: "), fflush(stdin), gets(Student[i].major);
        printf("Medium score: "), scanf("%f", &Student[i].mediumScore);
    }
    // RETYPE:
    char studentCode[10];
    printf("Student ID to find: "), fflush(stdin), gets(studentCode);
    for (int z = 0; z < N; z++)
    {
        if (strcmp(Student[z].studentCode, studentCode) == 0)
        {
            printf("Student found");
            printf("\nStudent code: %s\n", Student[z].studentCode);
            printf("Name Student: %s\n", Student[z].nameStudent);
            printf("Major: %s\n", Student[z].major);
            printf("Medium score: %.1f\n", Student[z].mediumScore);
        }
        else
        {
            printf("Student does not exist!\n");
            // goto RETYPE;
        }
    }
}