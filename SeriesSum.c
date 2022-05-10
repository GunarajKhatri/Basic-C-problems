/*

Q.Program to find sum of series upto Nth term :)
Series=> nth term = N(N+1)/2 * 10N

*/

#include <stdio.h>

void SumOFSeries(int N){
    int sum=0;
    for (int i = 1; i <=N; i++)
    {   
        int term=((i*(i+1)) /2)* 10*i;
        sum = sum + term;
    }
    printf("The sum to %dth term is %d\n",N,sum);
    
}

int main(){
    int N;
    printf("Enter integer for sum to Nth term: ");
    scanf("%d",&N);
    printf("\n");
    SumOFSeries(N);
}