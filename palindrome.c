#include <stdio.h>
#include <string.h>

int main(){
    //kayak
    char string[]="kayak";
    int len=strlen(string);
    int count=0;
    for (int i = 0; i < len/2; i++)
    {
        if(string[i]!=string[len-1-i]){
            count++;
        }
    }
    if(count>0){
        printf("non-palindrome string!! \n");
    }else{
        printf("palindrome string!! \n");
    }
    
}