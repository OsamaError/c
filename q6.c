#include <stdio.h>


// write a c code to convert from decimal to  binary.

int main(){

    int decimal, decimal1, remainder, binary = 0, i = 1;
    

    // Negative numbers are not supported
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    decimal1 = decimal;

    while (decimal != 0){
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * i;
        i *= 10;
    }

    printf("Binary equivalent of %d is %d\n", decimal1, binary);

    
    return 0;
}
