#include <stdio.h>


// write a c code to print a prime numbers start from 2 to number you have been enterd it.
// n=9 ---> 2 3 5 7 


int main (){

    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);


    if (num < 2) {
        printf("No prime numbers in this range.\n");
    } else {
        printf("%d ",2);

    return 0;
}