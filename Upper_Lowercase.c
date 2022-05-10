/*

Q.Program to read string from user and change it to uppercase if first word is 
lowercase and vice-versa:)

*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *ChangeLetter(char str[])
{
    char newword[strlen(str) + 1];
    if (isupper(str[0]))
    {
        for (int i = 0; i < strlen(str); i++)
        {
            newword[i] = tolower(str[i]);
        }
    }
    else
    {
        for (int i = 0; i < strlen(str); i++)
        {
            newword[i] = toupper(str[i]);
        }
    }
    str = newword;
    return str;
}

int main()
{
    char str[32];
    printf("Enter the string \n");
    scanf(" %s", &str);
    printf("%s\n", ChangeLetter(str));
}