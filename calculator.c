#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void sum();
void subtraction();
void multiplication();
void division();
void squareroot();
void mpower();

int main()
{
    sum();
    subtraction();
    multiplication();
    division();
    squareroot();
    mpower();

    return 0;
}
void sum()
{
    int sum = 0, a, b;
    printf("Enter two numbers whose summation you would like: \n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("The summation of %d and %d is : %d  \n", a, b, sum);
}
void subtraction()
{
    int sum = 0, a, b;
    printf("Enter two numbers whose substraction you would like: \n");
    scanf("%d %d", &a, &b);
    sum = a - b;
    printf("The subtraction of %d and %d is : %d   \n", a, b, sum);
}
void multiplication()
{
    int sum = 0, a, b;
    printf("Enter two numbers whose multiplication you would like: \n");
    scanf("%d %d", &a, &b);
    sum = a * b;
    printf("The multiplication of %d and %d is : %d   \n", a, b, sum);
}
void division()
{
    float sum = 0, a, b;
    printf("Enter two numbers whose division you would like: \n");
    scanf("%f %f", &a, &b);
    sum = (float)a / b;
    printf("The division of %f and %f is : %f  \n", a, b, sum);
}
void squareroot()
{
    float sum = 0, a;
    printf("Enter one number that you would like the square root of: \n");
    scanf("%f", &a);
    sum = (float)sqrt(a);
    printf("The square root of %f is : %f   \n", a, sum);
}
void mpower()
{
    int sum = 1, a, b;
    printf("Enter one number and the m power you would like it in: \n");
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        sum *= a;
        --b;
    }
    printf("Answer is: %d   \n", sum);
}
