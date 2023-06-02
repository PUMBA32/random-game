#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
    int uN, attempts = 0, r;

    printf("\nGame started!");

    while(true) {
        srand(time(NULL));
        int rN = rand() % 100;
        printf("\nRandom number generated! (0, 100]");
        while (true) {
            printf("\n-> ");
            scanf("%d", &uN);
            attempts++;
            if(uN == rN) {
                printf("\nYou Win! Random number is %d", rN);
                printf("\nattempts %d\n", attempts);
                break;
            }
            else if (uN > rN) {
                printf("\nYour number is higher");
                continue;
            }
            else if (uN < rN) {
                printf("\nYour number is less");
                continue;
            }
        }
        printf("\nRestart?(no - 1; yes - other numbers): ");
        scanf("%d", &r);
        if (r == 1) break;
    }
}