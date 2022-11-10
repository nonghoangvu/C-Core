#include <stdio.h>//#include <NongHoangVu>
int main()
{
    unsigned int marks;
    printf("Student's score: "), scanf("%u", &marks);
    if(marks <=10)
    {
        if(marks>=9) {printf("Excellent.");}
        else if (marks >= 8) {printf("Very good.");}
        else if (marks>=6.5){printf("Good.");}
        else if (marks >=5){ printf("Averageh.");}
        else if (marks >= 3.5){printf("Weak.");}
        else{printf("Poor.");}
    }
    else{printf("Invalid mark!");}
    return 0;
}