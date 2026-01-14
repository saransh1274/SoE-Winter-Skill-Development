#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,discriminant, root1, root2;
    printf("\nQuadratic Equation : a(x*x) + bx + c = 0\n");
    printf("\nBased on above equation form, \n");
    printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);
    printf("Enter the value of c : ");
    scanf("%f",&c);
    printf("\nEntered quadratic equation is : %.0f(x*x) + (%.0f)x + (%.0f) = 0\n", a,b,c);
    printf("\n");

    if (a==0) printf("Warning : a cannot be 0\n");

    discriminant = (b*b) - (4 * a *c);

    if (a!=0 && discriminant>0) {
        printf("Real and Distict roots.");
        root1 = ((-b) + sqrt(discriminant) ) / (2*a);
        root2 = ((-b) - sqrt(discriminant) ) / (2*a);
        printf("\nRoots of the quadratic equation are : %f , %f" , root1,root2);
    }
    else if (a!=0 && discriminant==0) {
        printf("Real and Equal Roots");
        root1 = (-b) / (2*a);
        printf("\nRoots of the quadratic equation are : %f , %f" , root1,root1);
    }
    else if (a!=0 && discriminant<0) {
        printf("Complex Roots");
        root1 = (-b) / (2*a);
        root2 = (sqrt(-discriminant)) / (2 * a);
        printf("\nRoots of the quadratic equation are : %f , %f" , root1,root2);
    }

    return 0;
}