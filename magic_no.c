//To find whether a number is a magic number or not. Magic number is the number whose sum of digits is equal to 1

#include<stdio.h>

int main(){
    int n = 50113;
    int rem, sum;
    
    while(n > 9){
        sum = 0;
        while(n != 0){

            rem = n % 10;
            sum = sum + rem;
            n = n / 10;
        }
        n = sum;
    }
    if(n == 1){
        printf("Magic number");
    }
    else{
        printf("Not magic number");
    }
}