//To find whether a number is a perfect number or not. Perfect number is the number whose sum of proper divison is equal to number

#include<stdio.h>

int main(){
    int n = 28;
    int sum = 0;

    for(int i = 1; i <= n/2; i++){
        if(n%i == 0){
            sum = sum+i;
        }
    }
    if(sum == n)
        printf("Perfect number");
    else
        printf("Not perfect number");
}