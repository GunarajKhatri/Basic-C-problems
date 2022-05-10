/*

Q.Program to find the power of the number using recursive function:)

*/

#include <stdio.h>

int recursive(int base, int expo)
{
    if (expo == 0)
        return 1;
    return base * recursive(base,expo - 1);
}

int main()
{
    int ans = recursive(3, 4);
    printf("%d", ans);
    return 0;
}