#include<stdio.h>//NONG HOANG VU
int main()
{
    int n, count = 0;
    float total = 0;
    printf("Number of elements: "), scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n;i++)
    {
        printf("Please enter a[%d]: ", i+1), scanf("%d", &array[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(array[i]%3==0)
        {
            total+=array[i];
            count++;
        }
    }
    printf("Average is: %g", total/count);
    return 0;
}