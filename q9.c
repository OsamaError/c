
// Write a login program in C that ask the user to enter his ID and his password, if the ID is 
//   correct the system will ask the user to enter his password up to 3 times,if he enters the 
//   password right the systems welcomes him, if the three times are incorrect, the system print 
//   No more tries. If the user ID is incorrect the system print You are not registered.

//   user      id       pass
//   Ahmed     1234     7788
//   Amr       5678     5566
//   wael      9870     1122


#include <stdio.h>

int main() {
    int user_id;
    int entered_passwd, attempt = 1;

    printf("Enter your ID: ");
    scanf("%s", user_id);


    switch (user_id) {
        case 1234:
            do {
                printf("Enter your password (attempt %d/3): ", attempt);
                scanf("%d", &entered_passwd);

                if (entered_passwd == 7788) {
                    printf("Welcome, Ahmed!\n");
                    return 0;
                }

                attempt++;
            } while (attempt <= 3);

            printf("No more tries.\n");
            break;

        case 5678:
            do {
                printf("Enter your password (attempt %d/3): ", attempt);
                scanf("%d", &entered_passwd);

                if (entered_passwd == 5566) {
                    printf("Welcome, Amr!\n");
                    return 0;
                }

                attempt++;
            } while (attempt <= 3);

            printf("No more tries.\n");
            break;

        case 9870:
            do {
                printf("Enter your password (attempt %d/3): ", attempt);
                scanf("%d", &entered_passwd);

                if (entered_passwd == 1122) {
                    printf("Welcome, wael!\n");
                    return 0;
                }

                attempt++;
            } while (attempt <= 3);

            printf("No more tries.\n");
            break;

        default:
            printf("You are not registered.\n");
    }

    return 0;
}
