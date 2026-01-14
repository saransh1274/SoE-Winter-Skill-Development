#include<stdio.h>
int main()
{
    int n, i, series;

    printf("Enter value of n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        series = i * i;

        if (series > 200)
            break;

        printf("%d ", series);
    }

    return 0;
}