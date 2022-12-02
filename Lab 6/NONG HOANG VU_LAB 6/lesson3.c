#include<stdio.h>
int main()
{
    int n;
    printf("Number of elements: "), scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n; i++)
    {
        printf("Insert Array[%d]: ", i+1), scanf("%d", &array[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("Descending order: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}