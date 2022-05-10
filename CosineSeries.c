/*

Q.Find the sum of cosine series upto N terms :
(hint:Cos(x)=1-x^2/2!+x^4/4!-x^6/6!+.................)

*/

#include <stdio.h>
#include <math.h>
#define PI 3.1415

unsigned long int factorial(unsigned long int num)
{
    if (num == 1 || num == 0)
        return 1;

    return (num)*factorial(num - 1);
}

float power(float base, int expon)
{
    float res = 1.0;
    if (expon == 1)
        return 1;
    for (int i = 0; i < expon; i++)
    {
        res = res * base;
    }
    return res;
}

float ComputeCosineSeries(int n, float angle)
{
    float sum = 0.0;
    for (int i = 1; i < n + 1; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + (power(angle, 2 * i - 2) / factorial(2 * i - 2));
        }
        else
        {
            sum = sum - (power(angle, 2 * i - 2) / factorial(2 * i - 2));
        }
    }

    return sum;
}

int main()
{
    int n;
    float angle;
    printf("Enter nth term to be calculated \n");
    scanf(" %d", &n);
    printf("\n");
    printf("Enter approximate angle to be found(in radian only) \n");
    scanf(" %f", &angle);
    printf("\n");
    float result = ComputeCosineSeries(n, angle);
    printf("Approximate result: %0.8f \n", result);
}
