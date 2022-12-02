#include<stdio.h>
int main()
{
    int n, min, max;
    printf("Number of elements: "), scanf("%d", &n);
    int array[n];
    for(int i = 0; i<n; i++)
    {
        printf("Insert Array[%d]: ", i+1), scanf("%d", &array[i]);
    }
    for(int j = 0; j < n; j++)
    {
        if(array[j] > max)
        {
            max = array[j];
        }
        if(array[j] < max)
        {
            min = array[j];
        }
    }
    printf("Max is: %d\n", max);
    printf("Min is: %d", min);
}