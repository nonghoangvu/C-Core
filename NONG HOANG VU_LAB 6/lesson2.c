#include<stdio.h>//NONG HOANG VU
int main()
{
    int n, min, max;
    printf("Number of elements: "), scanf("%d", &n);
    int array[n];
    for(int i = 0; i<n; i++)
    {
        printf("Insert Array[%d]: ", i+1), scanf("%d", &array[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
        if(array[i] < max)
        {
            min = array[i];
        }
    }
    printf("Max is: %d\n", max);
    printf("Min is: %d", min);
}