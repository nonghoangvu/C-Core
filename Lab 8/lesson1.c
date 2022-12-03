#include <stdio.h>
#include <stdlib.h>
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
    for (int i = 0; i < N; i++)
    {
        printf("\n+-------Student %d-------+", i + 1);
        printf("\nStudent code: %s\n", Student[i].studentCode);
        printf("Name Student: %s\n", Student[i].nameStudent);
        printf("Major: %s\n", Student[i].major);
        printf("Medium score: %.1f\n", Student[i].mediumScore);
    }
}