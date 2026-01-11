#include <stdio.h>
int main()
{
int r, x, y, point = 0;
printf("Enter the radius of the circle : ");
scanf("%d", &r);

for (x = -r; x <= r; x++) {
        for (y = -r; y <= r; y++) {
            if (x*x + y*y <= r*r) {
                printf("(%d,%d)   ", x, y);
                point++;
            }
        }
    }
printf("\n");
printf("\nTotal number of integer points within the circle = %d\n", point);

return 0;
}