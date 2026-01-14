#include<stdio.h>
int main()
{
    int a, b, gcd, lcm, n;
    printf("\nEnter n: ");
    scanf("%d", &n);
    printf("\nEnter a : ");
    scanf("%d", &a);
    printf("\nEnter b : ");
    scanf("%d", &b);

    for (int i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    lcm = (a * b) / gcd;

    int smallNum = ((n + lcm - 1) / lcm) * lcm;
    printf("\nRounded Smallest Number = %d", smallNum);

return 0;
}