#include<stdio.h>
int main() 
{
    int operatingCost = 10000;
    int profitPerUnit = 500;

    float sales = 100;
    float advt = 1000;

    float oldProfit = 0;
    float newProfit;
    
    for (;;)
    {
        newProfit = (sales * profitPerUnit) - (operatingCost + advt);
        if (newProfit < oldProfit)
            break;
        else {
        oldProfit = newProfit;

        advt = advt * 2;
        sales = sales * 1.2;
        }
    }

    printf("Sales before decline : %f  i.e.  %.0f\n", sales / 1.2, sales / 1.2);
    printf("\n");
    printf("Advertising cost : Rs %f i.e.  Rs %.0f\n", advt / 2, advt / 2);
    printf("\n");
    printf("Net Profit : Rs %f  i.e.  Rs %.2f\n", oldProfit, oldProfit);

    return 0;
}