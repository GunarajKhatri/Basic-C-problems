/*

Q.Program to check whether a year is leap year or not;)

*/

#include <stdio.h>

void CheckLeapYear(int year)
{
    if (year % 4 != 0)
        printf("Not a leap year");
    else if (year % 100 != 0)
        printf("Leap Year");
    else if (year % 400 != 0)
        printf("Not leap year");
    else
        printf("Leap Year");
}

int main(void)
{
    int year;
    printf("Enter the year to check:");
    scanf("%d", &year);
    printf("\n");
    CheckLeapYear(year);
    printf("\n");
}