#include<stdio.h>
int main()
{
    int i, j, next;
    printf("Enter the value of integer i : ");
    scanf("%d", &i);
    printf("Enter the value of integer j : ");
    scanf("%d", &j);
    if (j == 0) {
        printf("j must not be zero.\n");
    }
    if (i % j == 0)
        next = i;
    else
        next = i + (j - i % j);
    printf("Largest multiple of %d after %d is %d.", j, i, next);
    return 0;
}
