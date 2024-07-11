#include <stdio.h>

int main(){
    int answer;
    printf("What is the result of 3 x 4?\n");

    do {
        scanf("%d", &answer);

        if (answer == 12 ) {
            printf("Thanks!\n"); // answer is 12 or 4294967308 =)
            break;
        }
        else {
            printf("Try again.\n");
        }
    } while (1);


    return 0;
}
