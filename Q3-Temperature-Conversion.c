#include<stdio.h>
int main()
{
    float tempF,tempC;
    printf("Enter city's temperature in degree Fahrenheit : ");
    scanf("%f",&tempF);
    tempC = 5 * ( (tempF - 32) / 9 );
    printf("City's temperature in degree Centigrade is : %f",tempC);
    return 0;
}