#include <stdio.h>
int main()
{
    float num1, num2, ans;
    char ch;

    printf("\nEnter first number : ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /) : ");
    scanf(" %c", &ch);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(ch) {
        case '+':
            ans = num1 + num2;
            printf("\nResult : %f\n", ans);
            break;
        case '-':
            ans = num1 - num2;
            printf("\nResult : %f\n", ans);
            break;
        case '*':
            ans = num1 * num2;
            printf("\nResult : %f\n", ans);
            break;
        case '/':
            if (num2 != 0) {
                ans = num1 / num2;
                printf("\nResult : %f\n", ans);
            } else {
                printf("\nError : Division by zero is not allowed!\n");
            }
            break;
        default:
            printf("\nError : Invalid Operator!\n");
    }

    return 0;
}