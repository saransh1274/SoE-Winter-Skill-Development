#include<stdio.h>
int main() 
{
    int age;
    printf("\nEnter Driver's age (in Years): ");
    scanf("%d", &age);
    char carType;
    printf("\nIs the car manufactured in India? (Y/N) : ");
    scanf(" %c", &carType);
    char carCondition;
    printf("\nHave the car met with an accident in last 3 Years? (Y/N) : ");
    scanf(" %c", &carCondition);
    float carValue;
    printf("\nEnter Declared value of the car (in Rs) : ");
    scanf("%f", &carValue);
    float premiumCharged;

    if (age>=25 && carType=='Y') {
        if (carCondition=='N') {
            premiumCharged = (6.0/100) * carValue;
            printf("\nType of motor policy issued : COMPREHENSIVE");
            printf("\nAmount of Premium : Rs %.2f", premiumCharged);
            printf("\nExcess payable amount on any claim : not applicable");
        }
        else if (carCondition=='Y') {
            premiumCharged = (7.0/100) * carValue;
            printf("\nType of motor policy issued : COMPREHENSIVE");
            printf("\nAmount of Premium : Rs %.2f", premiumCharged);
            printf("\nExcess payable amount on any claim : Rs 100");
        }
    }
    else if (age>=25 && carType=='N') {
        if (carCondition=='N') {
            premiumCharged = (6.0/100) * carValue;
            printf("\nType of motor policy issued : COMPREHENSIVE");
            printf("\nAmount of Premium : Rs %.2f", premiumCharged);
            printf("\nExcess payable amount on any claim : Rs 100");
        }
        else if (carCondition=='Y') {
            premiumCharged = (7.0/100) * carValue;
            printf("\nType of motor policy issued : THIRD PARTY");
            printf("\nAmount of Premium : Rs %.2f", premiumCharged);
            printf("\nExcess payable amount on any claim : not applicable");
        }
    }
    else if (age<25 && carType=='Y') {
        if (carCondition=='N') {
            premiumCharged = (6.0/100) * carValue;
            printf("\nType of motor policy issued : COMPREHENSIVE");
            printf("\nAmount of Premium : Rs %.2f", premiumCharged);
            printf("\nExcess payable amount on any claim : Rs 100");
        }
        else if (carCondition=='Y') {
            printf("\nConsidering the Risk, No Policy can be taken out.");
        }
    }
    else if (age<25 && carType=='N') {
        if (carCondition=='N') {
            premiumCharged = (8.0/100) * carValue;
            printf("\nType of motor policy issued : COMPREHENSIVE");
            printf("\nAmount of Premium : Rs %.2f", premiumCharged);
            printf("\nExcess payable amount on any claim : Rs 100");
        }
        else if (carCondition=='Y') {
            printf("\nConsidering the Risk, No Policy can be taken out.");
        }
    }

    return 0;
}