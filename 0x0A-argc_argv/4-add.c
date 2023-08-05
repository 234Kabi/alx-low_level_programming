#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool is_positive_number(const char *str) {
    while (*str) {
        if (!isdigit(*str)) {
            return false;
        }
        str++;
    }
    return true;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("0\n");
        return 0;
    }

    int sum = 0;
    
    for (int i = 1; i < argc; i++) {
        if (!is_positive_number(argv[i])) {
            printf("Error\n");
            return 1;
        }
        
        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);

    return 0;
}