/*

Q.Program to read the given string and check whether it has alphabet or not...


*/


#include <stdio.h>
#include <string.h>

int CheckAplphabet(char string[])
{

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
            return 1;
        if (string[i] >= 'A' && string[i] <= 'Z')
            return 1;
    }
    return 0;
}

int main()
{   
    // try taking other any random string for testing 
    char string[] = "123*(a";
    if (CheckAplphabet(string))
        printf("Consists Of Alphabet \n");
    else
        printf("Doesn't Consist Of Alphabet \n");
}