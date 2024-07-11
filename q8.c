#include <stdio.h>

// write a c code to calculate the fibonacci of any number you have entered it.


int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the nth term: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
