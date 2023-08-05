#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int cents = atoi(argv[1]); // Convert argument to integer

    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    int coins = 0;

    coins += cents / 25; // Count the number of 25 cent coins
    cents %= 25;

    coins += cents / 10; // Count the number of 10 cent coins
    cents %= 10;

    coins += cents / 5; // Count the number of 5 cent coins
    cents %= 5;

    coins += cents / 2; // Count the number of 2 cent coins
    cents %= 2;

    coins += cents; // Count the number of 1 cent coins

    printf("%d\n", coins);

    return 0;
}