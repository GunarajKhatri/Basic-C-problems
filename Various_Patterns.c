/*

Q.Printing various patterns , run this file and test it !!

*/

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter any number between(1 to 5) to print out different pattern: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        // pattern1
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5 - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    case 2:
        // pattern2
        for (int i = 0; i < 5; i++)
        {
            int k = 0;
            while (k != i)
            {
                printf(" ");
                k++;
            }
            for (int j = 0; j < 5 - i; j++)
            {
                printf("*");
            }

            printf("\n");
        }
        break;

    case 3:
        // pattern3
        for (int i = 0; i < 9; i++)
        {
            int k = 0;
            if ((9 - i) - i < 0)
                break;
            while (k != i)
            {
                printf(" ");
                k++;
            }

            for (int j = k; j < 9 - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    case 4:
        // pattern4
        char coun[6] = "NePaL";
        for (int i = 4; i >= 0; i--)
        {
            int k = 0;
            while (k != i)
            {
                printf("  ");
                k++;
            }
            for (int j = i; j < 9 - i; j++)
            {

                // printf("* ");
                printf("%c ", coun[4 - i]);
            }
            printf("\n");
        }
        break;

    case 5:
        //pattern5
        char string[] = "Programming";
        for (int i = 0; i < strlen(string); i++)
        {
            int back = strlen(string) - i;
            if ((back - i) < 0)
                break;
            for (int j = i; j < back; j++)
            {
                printf("%c", string[j]);
            }

            printf("\n");
        }
        break;

    default:
        printf("Opps!! No patterns found!!\n");
        break;
    }
}