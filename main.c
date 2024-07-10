#include <stdio.h>

int main(){
    int id;

    printf("Enter your ID :\n");
    scanf("%d", &id);
    switch(id){
        case 1234:
            printf("Ahmed\n");
            break;
        case 5678:
            printf("Youssef\n");
            break;
        case 1145:
            printf("Min\n");
            break;
        default:
            printf("Wrong ID\n");
    }

    return 0;
}