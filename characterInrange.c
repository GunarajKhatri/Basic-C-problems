/*

Q.Display all characters between given range:)


*/

#include <stdio.h>
int main()
{

    char upperrange, lowerrange;
    printf("Enter lowerrange character to be dispalyed \n");
    scanf("%c", &lowerrange);
    printf("Enter upperrange character to be dispalyed \n");
    scanf(" %c", &upperrange);
    printf("\n");
    for (char x = lowerrange; x <= upperrange; x++)
    {
        printf("%c \n", x);
    }
}