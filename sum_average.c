/*

Q.Program to read values from user and find sum value untill user types 0 
and display sum as well as its average:)

*/
#include <stdio.h>

int main(void){
    int num;
    int sum=0;
    float n=0.0;
    while(num!=0){
    printf("Enter the number: ");
    scanf("%d",&num);
    sum=sum+num;
    n=n+1.0;
    }
    printf("Sum:%d\n",sum);
    float avg=sum/n;
    printf("Average:%0.3f\n",avg);
    
    
}