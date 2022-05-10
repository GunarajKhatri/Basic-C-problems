/*

Q.Program to check whether the entered number is triangular number or not:)

Note:Mathematical logic is used here instead of using straightforward looping stuffs:)

About Logic: We know nth traingular number is equal to sum of natural number to nth
term.Formula for sum of natural number =N(N+1)/2 so,
let say K(suppose any entered number).For k to be traingular number ,it should be 
like this:
2k=N^2+N
=>N^2+N-2k=0 is in quadratic form and k is only called as triangular no. if the
value of N obtained after solving should be exact postive integer value. 

*/
#include <stdio.h>
#include <math.h>

void CheckTriangularNum(int num)
{
    double descriminant =  1 + (8 * num);
    double ans = (sqrt(descriminant) - 1.0);
    if (fmod(ans,2.0) == 0.0)
        printf("Triangular Number\n");
    else
        printf("Non-Triangular Number\n");
}

int main()
{

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("\n");
    CheckTriangularNum(num);
    return 0;
}