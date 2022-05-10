/*

Q.In a m*n dimensional array , find largest term in each row and store them in another
array of size m

*/
#include <stdio.h>
#include <limits.h>
int main()
{

    int array[2][3] = {{5, 7, 2}, {23, 56, 59}};

    int row = sizeof(array) / sizeof(array[0]);
    int result[row];
    int col = sizeof(array[0]) / sizeof(array[0][0]);
    int max = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (max < array[i][j])
                max = array[i][j];
        }
        result[i] = max;
        max = INT_MIN;
    }

    for (int k = 0; k < 2; k++)
    {
        printf("max element in row-%d is %d \n",k+1, result[k]);
    }

    return 0;
}