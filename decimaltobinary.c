#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int DtoB(int dec){
int binary[32];
int i=0;
while(dec>0){
    binary[i]=dec%2;
    dec=dec/2;
    i++;
}
for (int j = i-1;j>=0;j--)
{
    printf("%d",binary[j]);
}



}

int main(){
DtoB(92);

}