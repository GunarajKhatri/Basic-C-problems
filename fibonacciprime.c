/*
Q.Program to find Nth fibonacci term and check it whether it is prime or not :)

*/
#include <stdio.h>
#include <math.h>

int generateFibonacci(int n)
{
    int first_term = 0;
    int sec_term = 1;
    int procedding_term;
    int i = 0;
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    while (i < n - 2)
    {
        procedding_term = first_term + sec_term;
        first_term = sec_term;
        sec_term = procedding_term;
        i++;
    }
    return procedding_term;
}

int CheckPrime(int num)
{
    if (num == 2)
        return 1;
    if (num < 2)
        return 0;
    for (int i = 2; i <= num; i++)
    {
        if (num % 2 == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int nth_term = generateFibonacci(n);
    printf("%dth fibonacci number:%d\n", n, nth_term);
    if (CheckPrime(nth_term))
    {
        printf("Prime \n");
    }
    else
    {
        printf("Not Prime \n");
    }
}