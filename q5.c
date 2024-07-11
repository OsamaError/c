#include <stdio.h>

// Write a program in C to calculate the factorial of an integer entered by the user using while loop 


int main(){
    int i=1, num;
    unsigned long long factorial = 1;
    printf("Enter a non-negative integer: \n");
    scanf("%d",&num);

    while(i<=num){
       factorial *= i;
        i++;
    }

     printf("Factorial of %d = %llu\n", num, factorial);

    return 0;
}