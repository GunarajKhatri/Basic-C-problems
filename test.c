#include <stdio.h>
#include <string.h>
int main()
{
    char str[20] = "HELLO";
    for (int i = 0; i < strlen(str); i++)
    {

        for (int j = 0; j <= i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
        if (i == strlen(str) - 1)
        {
            int tar = i;
            while (tar > 0)
            {
                for (int k = 0; k < tar; k++)
                {
                    printf("%c", str[k]);
                }
                printf("\n");
                tar--;
            }
        }
    }
}