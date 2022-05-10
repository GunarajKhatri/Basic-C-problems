/*

Q.Program to find sum of two complex numbers using concept of structure & array :)

*/

#include <stdio.h>

struct complex_nums
{
    int real;
    int imaginary;
};
void display(int real, int imaginary)
{   
    printf("\n");
    printf("Sum:%d+%di", real, imaginary);
}
void sum(struct complex_nums complex_number[2])
{
    int real = 0;
    int imaginary = 0;
    for (int i = 1; i <= 2; i++)
    {
        real = complex_number[i].real + real;
        imaginary = complex_number[i].imaginary + imaginary;
    }
    display(real, imaginary);
}

int main()
{
    struct complex_nums complex_num[2];
    for (int i = 1; i <= 2; i++)
    {
        printf("\n");
        printf("Enter real part of %dst complex number: ", i);
        scanf("%d", &complex_num[i].real);
        printf("\n");
        printf("Enter imaginary part of %dst complex number: ", i);
        scanf("%d", &complex_num[i].imaginary);
    }
    sum(complex_num);

    // 1+2i, 4+7i
}