#include<stdio.h>
int main()
{
    int x,y;
    printf("Number of elements X: "), scanf("%d", &x);
    printf("Number of elements Y: "), scanf("%d", &y);
    int array[x][y];
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            printf("Insert Array[%d][%d]: ", i, j), scanf("%d", &array[i][j]);
        }
    }
    printf("Calculating the squares of the particles of a 2D array.\n");
    printf("Before: ");
    for(int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d \t", array[i][j]);
        }
        
    }
    printf("\nAfter:  ");
    for(int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d \t", array[i][j]*array[i][j]);
        }
        
    }
}