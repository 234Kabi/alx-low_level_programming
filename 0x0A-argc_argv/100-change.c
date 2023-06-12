#include <stdio.h>
#include <stdlib.h>

int calculateMinCoins(int cents) {
    if (cents < 0) {
        return 0;
    }

    int coinValues[] = {25, 10, 5, 2, 1};
    int numCoins = sizeof(coinValues) / sizeof(coinValues[0]);
    int minCoins = 0;

    for (int i = 0; i < numCoins; i++) {
        while (cents >= coinValues[i]) {
            cents -= coinValues[i];
            minCoins++;
        }
    }
    return minCoins;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }
    int cents = atoi(argv[1]);
    int minCoins = calculateMinCoins(cents);
    printf("%d\n", minCoins);
    return 0;
}