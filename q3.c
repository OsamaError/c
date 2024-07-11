#include <stdio.h>

int main(){

    int i, num;
    printf("Enter the number: \n");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);

    for(i=1 ; i<=12 ; i++){
        printf("%d x %d = %d \n", num, i, num*i);
    }


    return 0;
}
