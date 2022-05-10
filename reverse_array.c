/*
Q.Program to reverse array in user defined func and return reversed array from there and display using pointer:)

*/

#include <stdio.h>

int *reverseArray(int arr[], int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
    return arr;
}

int main()
{
    int *arr;
    int numarr[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(numarr) / sizeof(numarr[0]);
    arr = reverseArray(numarr, len);
    for (int i = 0; i < len; i++)
    {
        printf("%d \n", *(arr + i));
    }
}