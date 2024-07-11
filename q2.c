#include <stdio.h>

int main(){
    int i, num, sum=0;
    float average;

    for (i=1 ; i<=10 ; i++) {
        printf("Enter number %d: \n",i);
        scanf("%d", &num);
        sum += num;
    }

    average = (float)sum/10.0;

    printf("The sum of the numbers is: %d\n", sum);
    printf("The average of the numbers is: %lf\n", average);

    return 0;
}
