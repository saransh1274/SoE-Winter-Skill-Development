#include<stdio.h>
int main()
{
    float tempF,tempC;
    printf("\nEnter city's temperature in degree Fahrenheit : ");
    scanf("%f",&tempF);
    tempC = 5 * ( (tempF - 32) / 9 );
    printf("\nCity's temperature in degree Centigrade is : %f",tempC);
    return 0;
}