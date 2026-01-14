#include<stdio.h>
int main()
{
    int num, mun = 0, lastDigit;
    printf("\nEnter number to check for palindrome : ");
    scanf("%d", &num);

    for (int i = num; i !=0 ; i = i / 10) {
        lastDigit = i % 10;
        mun = mun * 10 + lastDigit;
    }

    if (mun == num) {
        printf("\n\n%d is an Palindrome.", num);
    }
    else {
        printf("\n\n%d is not an Palindrome.", num);
    }

    return 0;
}