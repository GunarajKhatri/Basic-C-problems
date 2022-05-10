/*

Q.Program to find sum of digits of a number entered by user untill sum reduces 
to single digit:)
e.g:12345=>1+2+3+4+5=15=>1+5=6

*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    unsigned long long num;  //1844674407370955615;
    printf("Enter the numbers: ");
    scanf("%llu",&num);
    char val[32];
    int sum = 0;
    sprintf(val, "%llu", num);
    for (int i = 0; i < strlen(val); i++)
    {
        char c = val[i];
        int number = c - '0';
        sum = sum + number;
        if (i == strlen(val) - 1 && strlen(val) > 1)
        {
            printf("%d\n", sum);
            sprintf(val, "%llu", sum);
            i = -1;
            sum = 0;
        }
    }
}