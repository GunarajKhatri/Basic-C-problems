/*
Q.Program to find sum of diagonals of N*N 2d-array:)

*/

#include <stdio.h>

int main()
{

    int array[3][3] = {{1, 3, 0},
                       {-1, 5, 9},
                       {2, 7, 9}};
    int len = sizeof(array) / sizeof(array[0]);

    int first_diagonal = 0;
    int sec_diagonal = 0;
    for (int i = 0; i < len; i++)
    {
        first_diagonal = first_diagonal + array[i][i];
        sec_diagonal = sec_diagonal + array[i][len - 1 - i];
    }
    int sum = first_diagonal + sec_diagonal;
    printf("%d \n", sum);
}